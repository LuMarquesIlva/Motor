#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

#include <SDL3/SDL.h>

#include <VBO.h>

class VBO;
class Motor;

class Motor {
    public:
        SDL_Window *win;
        SDL_Renderer *ren;
        SDL_Event evnt;

        bool ShouldQuit = false;
        int Width = 800;
        int Height = 600;

        // Main Functions

        // -- Initialize A Basic Window --
        Motor();

        // Update
        void Update();

        // Utilities Function

        // Converts Vector To String (<Float Vector>, <Delimiter ex. ", ">)
        std::string ConvertVectorToString(const std::vector<float>& vec, const std::string& delim = ", ");
        
        // Converts Array To Vector TODO: FIX
        std::vector<float> ConvertArrayToVector(float array[]);
        
        // Print A Vector
        void PrintVector(std::vector<float> vec);
};