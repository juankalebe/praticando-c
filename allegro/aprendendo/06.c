#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <stdio.h>

// --- CONFIGURAÇÕES DA FÍSICA ---
const float FPS = 60.0;
// A gravidade aqui está em "pixels por frame ao quadrado". 
// Se fosse metros, seria 9.8, mas na tela precisamos ajustar para ficar visualmente agradável.
const float GRAVIDADE = 0.5; 

const int LARGURA_TELA = 1000;
const int ALTURA_TELA = 600;

// Struct para organizar os dados da bolinha
typedef struct {
    float x;
    float y;
    float vx; // Velocidade horizontal
    float vy; // Velocidade vertical
    float raio;
    bool lancada; // Estado: se false, ela está parada; se true, está voando
} Bolinha;

void init_bolinha(Bolinha *b) {
    // Configuração inicial do Lançamento Horizontal:
    // Começa no alto (Y pequeno) e na esquerda (X pequeno)
    b->x = 50; 
    b->y = 100; // Altura da "mesa"
    
    b->vx = 16.0; // Velocidade inicial horizontal (impulso)
    b->vy = 0.0; // No lançamento horizontal, a velocidade inicial vertical é ZERO
    
    b->raio = 10;
    b->lancada = false; // Começa parada esperando comando
}

int main() {
    // 1. Inicialização
    if (!al_init()) return -1;
    if (!al_init_primitives_addon()) return -1; // Necessário para desenhar a bola
    al_install_keyboard();

    ALLEGRO_DISPLAY *display = al_create_display(LARGURA_TELA, ALTURA_TELA);
    ALLEGRO_EVENT_QUEUE *queue = al_create_event_queue();
    ALLEGRO_TIMER *timer = al_create_timer(1.0 / FPS);

    al_register_event_source(queue, al_get_display_event_source(display));
    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_timer_event_source(timer));

    // Criar a bolinha
    Bolinha bola;
    init_bolinha(&bola);

    bool rodando = true;
    bool redesenhar = true;

    al_start_timer(timer);

    // Loop simples para validar se o número é positivo
    do {
        printf("Digite a velocidade horizontal da bolinha (m/s): ");
        scanf("%f", &bola.vx);

        if (bola.vx < 0) {
            printf("A velocidade deve ser positiva. Tente novamente.\n\n");
        }

    } while (bola.vx < 0);

    printf("\nVelocidade configurada com sucesso: %.2f m/s\n", bola.vx);



    // 2. Game Loop
    while (rodando) {
        ALLEGRO_EVENT ev;
        al_wait_for_event(queue, &ev);

        if (ev.type == ALLEGRO_EVENT_TIMER) {
            // --- ATUALIZAÇÃO DA FÍSICA ---
            
            if (bola.lancada) {
                // Eixo X: MRU (Velocidade constante)
                bola.x += bola.vx;

                // Eixo Y: MRUV (Aceleração da gravidade)
                bola.vy += GRAVIDADE; // Aumenta a velocidade de descida
                bola.y += bola.vy;    // Atualiza a posição
            }

            // Colisão com o chão (simples)
            if (bola.y + bola.raio >= ALTURA_TELA) {
                bola.y = ALTURA_TELA - bola.raio; // Corrige posição para não enterrar no chão
                bola.vy = 0; // Para
                bola.vx = 0; // Atrito infinito (para simplificar)
                bola.lancada = false;
                printf("A bolinha tocou o chão!\n");
            }
            
            // Se sair da tela pela direita, reinicia
            if (bola.x - bola.raio > LARGURA_TELA) {
                init_bolinha(&bola);
            }

            redesenhar = true;
        }
        else if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
            // Tecla ESPAÇO lança a bola
            if (ev.keyboard.keycode == ALLEGRO_KEY_SPACE) {
                if (!bola.lancada && bola.y < ALTURA_TELA - bola.raio - 1) {
                    bola.lancada = true;
                    printf("Lançamento iniciado!\n");
                } 
                // Se já caiu, R reseta
                else {
                    init_bolinha(&bola);
                }
            }
            if (ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
                rodando = false;
            }
        }
        else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            rodando = false;
        }

        // --- DESENHO ---
        if (redesenhar && al_is_event_queue_empty(queue)) {
            al_clear_to_color(al_map_rgb(30, 30, 30)); // Fundo cinza escuro

            // Desenhar "mesa" ou plataforma de lançamento
            al_draw_filled_rectangle(0, 110, 50, 600, al_map_rgb(100, 100, 100));

            // Desenhar a bola
            al_draw_filled_circle(bola.x, bola.y, bola.raio, al_map_rgb(255, 50, 50));

            // Instruções na tela (opcional, requer addon de fonte, removi para simplificar o código puro)
            
            al_flip_display();
            redesenhar = false;
        }
    }

    // 3. Limpeza
    al_destroy_display(display);
    al_destroy_timer(timer);
    al_destroy_event_queue(queue);

    return 0;
}