#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <stdio.h>
//COMPILAR: gcc 07.c -o 07 $(pkg-config allegro-5 allegro_font-5 allegro_image-5 allegro_primitives-5 allegro_ttf-5 --libs --cflags)
// --- CONFIGURAÇÕES DA FÍSICA ---
const float FPS = 60.0;
const float GRAVIDADE = 0.5; // Pixels por frame ao quadrado
const int LARGURA_TELA = 1000;
const int ALTURA_TELA = 600;

// --- ESTADOS DO JOGO ---
// Define se estamos na tela de escolha ou na tela da simulação
enum Estado {
    MENU,
    JOGANDO
};

// Struct da Bolinha
typedef struct {
    float x;
    float y;
    float vx; // Velocidade horizontal
    float vy; // Velocidade vertical
    float raio;
    bool lancada; 
} Bolinha;

void init_bolinha(Bolinha *b, float velocidade_inicial) {
    b->x = 50; 
    b->y = 100; // Altura da "mesa"
    
    b->vx = velocidade_inicial; 
    b->vy = 0.0; 
    
    b->raio = 10;
    b->lancada = false; 
}

int main() {
    // 1. Inicialização do Allegro e Addons
    if (!al_init()) return -1;
    if (!al_init_primitives_addon()) return -1;
    al_init_font_addon(); // Necessário para textos
    al_init_ttf_addon();  // Necessário para fontes
    al_install_keyboard();

    ALLEGRO_DISPLAY *display = al_create_display(LARGURA_TELA, ALTURA_TELA);
    ALLEGRO_EVENT_QUEUE *queue = al_create_event_queue();
    ALLEGRO_TIMER *timer = al_create_timer(1.0 / FPS);

    // Carrega uma fonte padrão do sistema para não precisar de arquivo .ttf externo
    ALLEGRO_FONT *fonte = al_create_builtin_font();

    al_register_event_source(queue, al_get_display_event_source(display));
    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_timer_event_source(timer));

    // Variáveis de Controle
    Bolinha bola;
    int estado_atual = MENU;       // Começamos no menu
    float velocidade_escolhida = 10.0; // Valor padrão no menu
    bool rodando = true;
    bool redesenhar = true;

    al_start_timer(timer);

    // 2. Game Loop Principal
    while (rodando) {
        ALLEGRO_EVENT ev;
        al_wait_for_event(queue, &ev);

        if (ev.type == ALLEGRO_EVENT_TIMER) {
            // ==========================================
            // LÓGICA DO ESTADO: JOGANDO
            // ==========================================
            if (estado_atual == JOGANDO) {
                if (bola.lancada) {
                    // Física
                    bola.x += bola.vx;      // MRU Horizontal
                    bola.vy += GRAVIDADE;   // Aceleração Vertical
                    bola.y += bola.vy;      // MRUV Vertical
                }

                // Colisão com o chão
                if (bola.y + bola.raio >= ALTURA_TELA) {
                    bola.y = ALTURA_TELA - bola.raio;
                    bola.vy = 0;
                    bola.vx = 0; // Para a bola
                    bola.lancada = false;
                }
                
                // Se sair da tela, volta para o início (com a mesma velocidade)
                if (bola.x - bola.raio > LARGURA_TELA) {
                    init_bolinha(&bola, velocidade_escolhida);
                }
            }
            redesenhar = true;
        }
        
        else if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
            // ==========================================
            // CONTROLES DO MENU
            // ==========================================
            if (estado_atual == MENU) {
                switch (ev.keyboard.keycode) {
                    case ALLEGRO_KEY_1:
                        velocidade_escolhida = 5.0;
                        init_bolinha(&bola, velocidade_escolhida);
                        estado_atual = JOGANDO;
                        break;
                    case ALLEGRO_KEY_2:
                        velocidade_escolhida = 15.0;
                        init_bolinha(&bola, velocidade_escolhida);
                        estado_atual = JOGANDO;
                        break;
                    case ALLEGRO_KEY_3:
                        velocidade_escolhida = 25.0;
                        init_bolinha(&bola, velocidade_escolhida);
                        estado_atual = JOGANDO;
                        break;
                    // Ajuste fino
                    case ALLEGRO_KEY_RIGHT:
                        velocidade_escolhida += 1.0;
                        break;
                    case ALLEGRO_KEY_LEFT:
                        velocidade_escolhida -= 1.0;
                        if (velocidade_escolhida < 0) velocidade_escolhida = 0;
                        break;
                    case ALLEGRO_KEY_ENTER:
                    case ALLEGRO_KEY_SPACE:
                        init_bolinha(&bola, velocidade_escolhida);
                        estado_atual = JOGANDO;
                        break;
                }
            }
            // ==========================================
            // CONTROLES DO JOGO
            // ==========================================
            else if (estado_atual == JOGANDO) {
                if (ev.keyboard.keycode == ALLEGRO_KEY_SPACE) {
                    if (!bola.lancada && bola.y < ALTURA_TELA - bola.raio - 1) {
                        bola.lancada = true; // Lança!
                    } else {
                        // Reseta a posição se apertar espaço dnv
                        init_bolinha(&bola, velocidade_escolhida);
                    }
                }
                // ESC volta para o Menu
                if (ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
                    estado_atual = MENU;
                    bola.lancada = false;
                }
            }
        }
        else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            rodando = false;
        }

        // ==========================================
        // DESENHO (RENDERIZAÇÃO)
        // ==========================================
        if (redesenhar && al_is_event_queue_empty(queue)) {
            al_clear_to_color(al_map_rgb(30, 30, 30)); // Fundo cinza escuro

            if (estado_atual == MENU) {
                // --- TELA DE MENU ---
                al_draw_text(fonte, al_map_rgb(255, 255, 255), LARGURA_TELA/2, 150, ALLEGRO_ALIGN_CENTER, "SIMULADOR DE LANCAMENTO HORIZONTAL");
                
                al_draw_text(fonte, al_map_rgb(200, 200, 200), LARGURA_TELA/2, 250, ALLEGRO_ALIGN_CENTER, "Escolha a velocidade inicial:");
                al_draw_text(fonte, al_map_rgb(100, 200, 100), LARGURA_TELA/2, 280, ALLEGRO_ALIGN_CENTER, "Tecle 1: Lento (5.0)");
                al_draw_text(fonte, al_map_rgb(100, 200, 100), LARGURA_TELA/2, 300, ALLEGRO_ALIGN_CENTER, "Tecle 2: Medio (15.0)");
                al_draw_text(fonte, al_map_rgb(100, 200, 100), LARGURA_TELA/2, 320, ALLEGRO_ALIGN_CENTER, "Tecle 3: Rapido (25.0)");

                al_draw_textf(fonte, al_map_rgb(255, 255, 0), LARGURA_TELA/2, 400, ALLEGRO_ALIGN_CENTER, 
                    "Ou use SETAS ESQ/DIR para ajustar: %.1f m/s", velocidade_escolhida);
                
                al_draw_text(fonte, al_map_rgb(255, 255, 255), LARGURA_TELA/2, 420, ALLEGRO_ALIGN_CENTER, "Pressione ENTER para iniciar");
            } 
            else {
                // --- TELA DE JOGO ---
                
                // Mesa
                al_draw_filled_rectangle(0, 110, 50, 600, al_map_rgb(100, 100, 100));

                // Bolinha
                al_draw_filled_circle(bola.x, bola.y, bola.raio, al_map_rgb(255, 50, 50));

                // HUD (Textos na tela)
                al_draw_textf(fonte, al_map_rgb(255, 255, 255), 10, 10, 0, "Velocidade Inicial (Vox): %.1f", bola.vx);
                
                if(!bola.lancada && bola.y < 200) 
                    al_draw_text(fonte, al_map_rgb(255, 255, 0), LARGURA_TELA/2, 50, ALLEGRO_ALIGN_CENTER, "Pressione ESPACO para lancar!");
                else if (bola.y >= ALTURA_TELA - bola.raio -1)
                    al_draw_text(fonte, al_map_rgb(255, 100, 100), LARGURA_TELA/2, 300, ALLEGRO_ALIGN_CENTER, "Impacto! Espaco para reiniciar ou ESC para Menu");
            }

            al_flip_display();
            redesenhar = false;
        }
    }

    // 3. Limpeza
    al_destroy_display(display);
    al_destroy_timer(timer);
    al_destroy_event_queue(queue);
    // Não precisa destruir fonte builtin, mas se usar TTF normal precisaria.

    return 0;
}