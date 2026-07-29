#include <Motor.h>

void Motor::Update() {

    SDL_PollEvent(&evnt);

    if (evnt.type == SDL_EVENT_QUIT) {
        ShouldQuit = true;
    }

}

std::string Motor::ConvertVectorToString(const std::vector<float>& vec, const std::string& delim) {
    std::ostringstream oss;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (i > 0) oss << delim;
        // Use fixed and setprecision for consistent formatting (e.g., 2 decimal places)
        oss << std::fixed << std::setprecision(2) << vec[i]; 
    }
    return oss.str();
}

std::string Motor::ConvertVectorToString(Vector vec, const std::string& delim) {
    std::ostringstream oss;
    for (size_t i = 0; i < vec.GetFVector().size(); ++i) {
        if (i > 0) oss << delim;
        // Use fixed and setprecision for consistent formatting (e.g., 2 decimal places)
        oss << std::fixed << std::setprecision(2) << vec.GetFVector(i); 
    }
    return oss.str();
}

std::vector<float> Motor::ConvertArrayToVector(float array[]) {
    std::vector<float> FloatVec;
    
    for (size_t i = 0; i < (sizeof(&array) / sizeof(array[0])); i++) {
        FloatVec.push_back(array[i]);
    }
    return FloatVec;
}

void Motor::PrintVector(std::vector<float> vec) {
    SDL_Log("LOG: %s", ConvertVectorToString(vec).c_str()); // Junta Os Floats e Converte Para a Saída printf
}

void Motor::PrintVector(Vector vec) {
    SDL_Log("LOG: %s", ConvertVectorToString(vec).c_str()); // Junta Os Floats e Converte Para a Saída printf
}

Motor::Motor() {
    
    // Inicia o SDL3
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("LOG: Could Not Initlize SDL3: %s", SDL_GetError());
        SDL_Quit();
        ShouldQuit = true;
    }

    // Cria o Dispositivo de GPU
    SDL_GPUDevice *GPUDev = SDL_CreateGPUDevice(SDL_GPU_SHADERFORMAT_SPIRV, false, NULL);
    if (GPUDev == NULL) {
        SDL_Log("LOG: Could Not Initialize GPU: %s", SDL_GetError());
        SDL_Log("LOG: GPU HINT: %s", SDL_HINT_GPU_DRIVER);
        SDL_Quit();
        ShouldQuit = true;
    };

    // Cria a Janela
    if (!SDL_CreateWindow("Motor", Width, Height, SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE)) {
        SDL_Log("LOG: Could Not Initialize Window: %s", SDL_GetError());
        SDL_Quit();
        ShouldQuit = true;
    };

}