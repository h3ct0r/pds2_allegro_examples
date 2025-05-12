# pds2_allegro_example
## _A small repo with the code of the tutorials for the PDS2 class @ UFMG using Allegro_

## How to run the examples

- Install Allegro following the wiki tutorials: https://github.com/liballeg/allegro_wiki/wiki/Quickstart
- Go to the example folder and compile with:
    - `cd example_0_basic_window_init`
    - ```
        g++ -std=c++11 -Wall -g main.cpp \
        (pkg-config --libs --cflags allegro-5 allegro_main-5 allegro_audio-5 allegro_image-5 allegro_font-5 allegro_primitives-5 allegro_acodec-5 allegro_ttf-5) \
        -o main
        ```
    - Run the executable file `./main`