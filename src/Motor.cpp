#include <Motor.h>

int Motor::InitWindow() {
    ShouldQuit = false;
    
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("Could Not Initialize SDL3");
        SDL_Quit();
    };

    if (!SDL_CreateWindowAndRenderer("Motor", Width, Height, SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE, &win, &ren)) {
        SDL_Log("Could Not Initialize Window And Renderer");
        SDL_Quit();
    };

    while (ShouldQuit != true) {
        SDL_PollEvent(&evnt);

        if (evnt.type == SDL_EVENT_QUIT) {
            break;
        }
    }

    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);

    SDL_Quit();
    return 0;
}