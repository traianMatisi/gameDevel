#include <stdio.h>
#include <SDL2/SDL.h>

int SDL_main(int argc, char* argv[])
{
    printf("%i\n", argc);
    printf("%s\n", argv[0]);

    if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        printf("Error initializing SDL: %s\n", SDL_GetError());
        return 0;
    }
    printf("SDL successfully initialized!\n");
    SDL_Quit();
    return 0;
}
