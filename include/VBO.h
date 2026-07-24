#pragma once

#include <vector>

class VBO {
    public:
        VBO(std::vector<float> vertices);
        std::vector<float> VBOGen(int BufferSize);
        std::vector<float> *ActiveObjectBuffer;

        void Bind();
        void Unbind();
        void Delete();
};