#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <unistd.h>

#include <iostream>

/*
g++ -std=c++11 -Wall -g main.cpp \
$(pkg-config --libs --cflags allegro-5 allegro_main-5 allegro_audio-5 allegro_image-5 allegro_font-5 allegro_primitives-5 allegro_acodec-5 allegro_ttf-5) \
-o main && ./main
*/

using namespace std;

const float FPS = 30;
const int SCREEN_W = 800;
const int SCREEN_H = 600;

int main(int argc, char **argv) {
    // Initialize Allegro
    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_TIMER *timer = NULL;

    // Initialization routines
    al_init();
    al_init_primitives_addon();
    timer = al_create_timer(1.0 / FPS);

    display = al_create_display(SCREEN_W, SCREEN_H);

    unsigned int microsecond = 1000000;
    int seconds = 0;
    while (seconds < 10) {
        // white background
        al_clear_to_color(al_map_rgba_f(1, 1, 1, 1));

        al_draw_circle(seconds * 100,
                       SCREEN_H / 2,
                       50,
                       al_map_rgb(255, 0, 0), 5);

        al_flip_display();
        usleep(1 * microsecond);  // sleeps for 1 second
        cout << "Sleeping for 1 second... " << seconds << endl;
        seconds++;
    }

    al_destroy_display(display);
    return 0;
}