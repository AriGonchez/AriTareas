#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include <iostream>

SDL_Window* window;
SDL_Renderer* renderer;
SDL_Event Event;
SDL_Texture *fond,*pik1, *pik2, *pik3, *pik4;
SDL_Rect rect_fond,rect_pik1,rect_pik2, rect_pik3, rect_pik4;

int main( int argc, char* args[] )
{
    //Init SDL
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        return 10;
    }
    //Creates a SDL Window
    if((window = SDL_CreateWindow("Image Loading", 50, 60, 400/*WIDTH*/, 250/*HEIGHT*/, SDL_WINDOW_RESIZABLE | SDL_RENDERER_PRESENTVSYNC)) == NULL)
    {
        return 20;
    }
    //SDL Renderer
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED );
    if (renderer == NULL)
    {
        std::cout << SDL_GetError() << std::endl;
        return 30;
    }

    //Init textures
    int w=0,h=0;
    fond = IMG_LoadTexture(renderer,"Fondo.png");
    SDL_QueryTexture(fond, NULL, NULL, &w, &h);
    rect_fond.x = 0; rect_fond.y = 0; rect_fond.w = w; rect_fond.h = h;

    pik1 = IMG_LoadTexture(renderer, "imagen1.png");
    SDL_QueryTexture(pik1, NULL, NULL, &w, &h);
    rect_pik1.x = 0; rect_pik1.y = 80; rect_pik1.w = w; rect_pik1.h = h;

    pik2 = IMG_LoadTexture(renderer, "imagen2.png");
    SDL_QueryTexture(pik2, NULL, NULL, &w, &h);
    rect_pik2.x = 90; rect_pik2.y = 80; rect_pik2.w = w; rect_pik2.h = h;

    pik3 = IMG_LoadTexture(renderer, "imagen3.png");
    SDL_QueryTexture(pik3, NULL, NULL, &w, &h);
    rect_pik3.x = 180; rect_pik3.y = 80; rect_pik3.w = w; rect_pik3.h = h;

    pik4 = IMG_LoadTexture(renderer, "imagen4.png");
    SDL_QueryTexture(pik4, NULL, NULL, &w, &h);
    rect_pik4.x = 270; rect_pik4.y = 80; rect_pik4.w = w; rect_pik4.h = h;

    //Main Loop
    while(true)
    {
        while(SDL_PollEvent(&Event))
        {
            if(Event.type == SDL_QUIT)
            {
                return 0;
            }
            if(Event.type == SDL_KEYDOWN)
            {
                if(Event.key.keysym.sym == SDLK_d)
                    rect_pik1.x++;
            }
        }

        SDL_RenderCopy(renderer, fond, NULL, &rect_fond);
        SDL_RenderCopy(renderer, pik1, NULL, &rect_pik1);
        SDL_RenderCopy(renderer, pik2, NULL, &rect_pik2);
        SDL_RenderCopy(renderer, pik3, NULL, &rect_pik3);
        SDL_RenderCopy(renderer, pik4, NULL, &rect_pik4);
        SDL_RenderPresent(renderer);
    }
    return 0;
    }
