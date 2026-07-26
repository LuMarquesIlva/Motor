#pragma once
#define F_ARRAY_BUFFER VBO::FrontObjectBuffer.GetFVector()
#define B_ARRAY_BUFFER VBO::BackObjectBuffer.GetFVector()

#include <Vector.h>

class VBO {
    public:
        VBO();
        void VBOGenData(Vector vertices);

        Vector FrontObjectBuffer;
        Vector BackObjectBuffer;
        int FrontObjectBufferSize;
        int BackObjectBufferSize;

        void Swap();
        void Bind();
        void Unbind();
        void Delete();
};