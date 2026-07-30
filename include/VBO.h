#pragma once
#define VERTEX_BUFFER VBO::VertexBuffer

#include <Vector.h>
#include <Motor.h>

class VBO;

Motor _motor;

class VBO : public Vector{
    public:
        SDL_GPUCommandBuffer *CommandBuffer = SDL_AcquireGPUCommandBuffer(_motor.GPUDev);
        
        VBO()

        void Bind() {
            SDL_BindGPUVertexBuffers()
        };
        void Unbind();
        void Delete();
};