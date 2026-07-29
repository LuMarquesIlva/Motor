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

        // Funções Principais

        // -- Construtor Para Iniciar Uma Janela Básica --
        Motor();

        // Atualiza Por Frame
        void Update();

        // Funções de Utilidade

        // Converte Vetor Para String (<Float Vector>, <Delimitador ex. ", ">)
        std::string ConvertVectorToString(const std::vector<float>& vec, const std::string& delim = ", ");
        std::string ConvertVectorToString(const Vector vec, const std::string& delim = ", ");
        
        // Converte Array Para Vetor TODO: CONSERTAR
        std::vector<float> ConvertArrayToVector(float array[]);
        
        // Imprime Um Vetor
        void PrintVector(std::vector<float> vec);
        void PrintVector(Vector vec);
};