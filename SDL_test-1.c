#include <stdio.h>
#include <SDL2/SDL.h>
//#include "./constants.h"

#define TRUE 1
#define False 0

int SDL_main(int argc, char** argv) {
  SDL_Window* window = NULL;
  window = SDL_CreateWindow(
      "SDL2 It Works!",
      SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
      640, 480,
      SDL_WINDOW_SHOWN
      );
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
  SDL_SetRenderDrawColor(renderer, 9, 20, 33, 255);
  while(1){
    SDL_Event event;
    while(SDL_PollEvent(&event)){
      if( event.type == SDL_QUIT ){
        exit(0);
      }
    }
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
  }
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  //SDL_Quit();
  return 0;
}