#pragma once

#include <SDL3/SDL.h>

#include <VBO.h>

class Motor {
public:
    SDL_Window *win;
    SDL_Renderer *ren;
    SDL_Event evnt;

    bool ShouldQuit;
    int Width = 800;
    int Height = 600;

    // -- Initialize A Basic Window --
    // Returns 0 if Finished
    int InitWindow();
};