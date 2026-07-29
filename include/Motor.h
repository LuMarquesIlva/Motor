#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

#include <SDL3/SDL.h>

#include <VBO.h>
#include <VAO.h>
#include <Vector.h>

class Motor;

class Motor {
    public:
        SDL_Window *win;
        SDL_Renderer *ren;
        SDL_Event evnt;

        bool ShouldQuit = false; // Variável de Saída
        int Width = 800; // Largura da Janela
        int Height = 600; // Altura da Janela
        Vector BackgroundColor = {100, 100, 100, 255};

        // Funções Principais

        // -- Inicializador --
        void Init();

        // Atualiza Por Frame
        void Update();

        // Funções de Utilidade

        // Converte Vetor Para String (<Float Vector>, <Delimitador ex. ", ">)
        std::string ConvertVectorToString(const std::vector<float>& vec, const std::string& delim = ", ");
        std::string ConvertVectorToString(const std::vector<int>& vec, const std::string& delim = ", ");
        std::string ConvertVectorToString(const Vector vec, const std::string& delim = ", ");
        
        // Converte Array Para Vetor TODO: CONSERTAR
        std::vector<float> ConvertArrayToVector(float array[]);

        // Converte Todos Os Valores Para Float
        std::vector<float> ConvertVectorToFloat(Vector vec) {
            std::vector<float> TempVec;
            for (int &item : vec.GetIVector()) {
                TempVec.push_back(static_cast<float>(item));
            }
            return vec.GetFVector() = TempVec;
        }
        
        // Imprime Um Vetor
        void PrintVector(std::vector<float> vec);
        void PrintVector(std::vector<int> vec);
        void PrintVector(Vector vec);

        void SetBackgroundColor(int r, int g, int b) {
            BackgroundColor.GetIVector() = {r, g, b, 255};
        };

        std::vector<int> GetBackgroundColor() {
            return BackgroundColor.GetIVector();
        };
};