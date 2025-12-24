#include <stdio.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h> //complemento adicionado para poder renderizar textos
#include <allegro5/allegro_image.h> //complemento adicionado para poder carregar imagens

//para compilar no terminal: gcc hello.c -o hello $(pkg-config allegro-5 allegro_font-5 allegro_image-5 --libs --cflags)
//hello.c: nome do arquivo c
//hello: nome do executável final
int main()
{
    //verificação de inicialização (se foi true ou false) - tá usando o operador de negação justamente para retornar true para o IF quando der algo de errado na função tlgdo
    if(!al_init()) 
    {
        printf("couldn't initialize allegro\n");
        return 1;
    }

    if(!al_install_keyboard())
    {
        printf("couldn't initialize keyboard\n");
        return 1;
    }

    ALLEGRO_TIMER* timer = al_create_timer(1.0 / 30.0);
    if(!timer)
    {
        printf("couldn't initialize timer\n");
        return 1;
    }

    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    if(!queue)
    {
        printf("couldn't initialize queue\n");
        return 1;
    }

    ALLEGRO_DISPLAY* disp = al_create_display(640, 480);
    if(!disp)
    {
        printf("couldn't initialize display\n");
        return 1;
    }

    ALLEGRO_FONT* font = al_create_builtin_font();
    if(!font)
    {
        printf("couldn't initialize font\n");
        return 1;
    }

    if(!al_init_image_addon()) //inicializando o complemento da imagem para poder importar com o load bitmap
    {
        printf("couldn't initialize image addon\n");
        return 1;
    }

    ALLEGRO_BITMAP* mysha = al_load_bitmap("mysha.png"); //para importar a imagem que está no meu repositório
    if(!mysha) //verificando se deu algum erro
    {
        printf("couldn't load mysha\n");
        return 1;
    }

    //SISTEMA DE EVENTOS DE NOVO
    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_display_event_source(disp));
    al_register_event_source(queue, al_get_timer_event_source(timer));

    bool done = false; //de onde veio esse done?
    bool redraw = true;
    ALLEGRO_EVENT event;

    al_start_timer(timer);
    while(1)
    {
        al_wait_for_event(queue, &event);

        switch(event.type)
        {
            case ALLEGRO_EVENT_TIMER:
                // game logic goes here.
                redraw = true;
                break; //aqui é para o switch apenas

            case ALLEGRO_EVENT_KEY_DOWN: //acho que esses dois juntos é para funcionarem como um OU
            case ALLEGRO_EVENT_DISPLAY_CLOSE:
                done = true; //muda o done de false para true
                break;
        }

        if(done) //então o done veio para poder auxiliar o uso desse switch e dar o break no while aqui fora em função do done
            break;

        if(redraw && al_is_event_queue_empty(queue))
        {
            al_clear_to_color(al_map_rgb(0, 0, 0));
            
            al_draw_bitmap(mysha, 100, 100, 0); //para poder renderizar a imagem importada na tela
            //al_draw_tinted_bitmap(mysha,al_map_rgba_f(0.5,0.5,0.5,0.5),100,100,0); //para pintar e mudar transparência
            al_draw_text(font, al_map_rgb(168, 50, 70), 320, 240, 0, "Hello world!"); 
            //essa ordem aqui do que vc está desenhando importa. É como se fosse camadas
            //fazendo desse jeito aqui o meu texto aparece em cima da imagem

            al_flip_display(); //parece que é o que faz aparecer as coisas na tela

            redraw = false;
        }
    }

    //liberar recursos após o loop
    al_destroy_bitmap(mysha); // destruindo o recurso para a imagem importada
    al_destroy_font(font);
    al_destroy_display(disp);
    al_destroy_timer(timer);
    al_destroy_event_queue(queue);

    return 0;
}