#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <unistd.h>

#include <iostream>

/*
g++ -std=c++11 -Wall -g main.cpp \
-I/opt/homebrew/Cellar/allegro/5.2.10.1_1/include \
-L/opt/homebrew/Cellar/allegro/5.2.10.1_1/lib -lallegro_main \
-lallegro_primitives -lallegro -o main && ./main
*/

using namespace std;

const float FPS = 30;
const int SCREEN_W = 800;
const int SCREEN_H = 600;

int main(int argc, char **argv) {
    // Initialize Allegro
    ALLEGRO_DISPLAY *display = NULL;

    // Initialization routines
    al_init();
    al_init_primitives_addon();

    display = al_create_display(SCREEN_W, SCREEN_H);

    unsigned int microsecond = 1000000;
    cout << "Sleeping for 3 seconds..." << endl;
    usleep(3 * microsecond);  // sleeps for 3 second

    al_destroy_display(display);

    return 0;
}