#include <allegro5/allegro5.h> //nucleo principal do allegro
#include <allegro5/allegro_font.h> //complemento para poder renderizar texto

int main()
{
    al_init(); //para o allegro poder inicializar suas coisas importantes
    al_install_keyboard(); //habilita a entrada do teclado em seu programa

    ALLEGRO_TIMER* timer = al_create_timer(1.0/30.0); //Precisamos de um temporizador e //esse 1/30 deve ser em relação a taxa de imagens por segundo (o FPS)
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue(); //uma fila de eventos para garantir que o jogo rode a uma velocidade constante

    ALLEGRO_DISPLAY* disp = al_create_display(600,400); //orienta o allegro a criar uma janela de 320x200

    ALLEGRO_FONT* font = al_create_builtin_font();//bult in - integrado. Aqui está escolhendo a fonte e no caso se escolheu a fonte já integrada

    //SISTEMA DE EVENTOS:
    al_register_event_source(queue, al_get_keyboard_event_source()); //reage a eventos no teclado
    al_register_event_source(queue, al_get_display_event_source(disp)); //reage a eventos no display
    al_register_event_source(queue, al_get_timer_event_source(timer)); //reage a eventos no temporizador

    bool redraw = true;
    ALLEGRO_EVENT event; //criando a variavel event??

    al_start_timer(timer); //iniciando o cronômetro um pouco antes do início do loop
    while(1) // loop principal do programa
    {
        al_wait_for_event(queue, &event); //aqui a execução fica parada esperando algum evento graças a essa variável event que foi criada após o register event source

        if(event.type == ALLEGRO_EVENT_TIMER)
            redraw = true;//esse aqui é acionado quando o temporizador dispara algum evento. daí ele redesenha o frame (a cada 30FPS pelo oq entendi)
        else if((event.type == ALLEGRO_EVENT_KEY_DOWN) || (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE))
            break; //aqui vai parar o loop quando a tecla down é clicada ou quando aperta o x do display

        if(redraw && al_is_event_queue_empty(queue))//para caso ter dado ok nas renderizações parece
        {
            al_clear_to_color(al_map_rgb(0, 0, 0)); //para deixar a tela preta //al_map_rgb é usado para passar cor pelo RGB de 0 a 255
            al_draw_text(font, al_map_rgb(255, 255, 255), 20, 20, 0, "Hello world!");//aqui é para desenhar o texto. diz a fonte, a cor, a cor e a posição
            al_flip_display();

            redraw = false;
        }
    }
    //aqui é para liberar os recursos de memória usados durante a inicialização
    al_destroy_font(font);
    al_destroy_display(disp);
    al_destroy_timer(timer);
    al_destroy_event_queue(queue);

    return 0;
}