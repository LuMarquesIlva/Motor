#pragma once
#define F_ARRAY_BUFFER VBO::FrontObjectBuffer
#define B_ARRAY_BUFFER VBO::BackObjectBuffer

#include <vector>

class VBO {
    public:
        VBO();
        void VBOGenData(std::vector<float> vertices);

        std::vector<float> FrontObjectBuffer;
        std::vector<float> BackObjectBuffer;
        int FrontObjectBufferSize;
        int BackObjectBufferSize;

        void Swap();
        void Bind();
        void Unbind();
        void Delete();
};