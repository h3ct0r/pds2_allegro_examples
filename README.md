# pds2_allegro_example
## _A small repo with the code of the tutorials for the PDS2 class @ UFMG using Allegro_

## How to run the examples

- Install Allegro following the wiki tutorials: https://github.com/liballeg/allegro_wiki/wiki/Quickstart
- Go to the example folder and compile with:
    - `cd example_0_basic_window_init`
    - ```
        g++ -std=c++11 -Wall -g main.cpp \
        -I/opt/homebrew/Cellar/allegro/5.2.10.1_1/include \
        -L/opt/homebrew/Cellar/allegro/5.2.10.1_1/lib -lallegro_main -lallegro_image \
        -lallegro_primitives -lallegro_acodec -lallegro_audio -lallegro_ttf \
        -lallegro_font -lallegro -o main
        ```
    - Run the executable file `./main`