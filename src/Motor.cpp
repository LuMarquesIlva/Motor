#include <Motor.h>

VBO __vbo__;

void Motor::Update() {

    SDL_PollEvent(&evnt);

    if (evnt.type == SDL_EVENT_QUIT) {
        ShouldQuit = true;
    }

    __vbo__.Swap();

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

std::vector<float> Motor::ConvertArrayToVector(float array[]) {
    std::vector<float> FloatVec;
    
    for (size_t i = 0; i < (sizeof(&array) / sizeof(array[0])); i++) {
        FloatVec.push_back(array[i]);
    }
    return FloatVec;
}

void Motor::PrintVector(std::vector<float> vec) {
    SDL_Log("LOG: %s", ConvertVectorToString(vec).c_str()); // Joins the floats and get the printf way
}

Motor::Motor() {
    
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("LOG: Could Not Initialize SDL3");
        SDL_Quit();
    };

    if (!SDL_CreateWindowAndRenderer("Motor", Width, Height, SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE, &win, &ren)) {
        SDL_Log("LOG: Could Not Initialize Window And Renderer");
        SDL_Quit();
    };

}