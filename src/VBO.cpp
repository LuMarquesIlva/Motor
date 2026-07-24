#include <VBO.h>

VBO *_VBO;

VBO::VBO(std::vector<float> vertices) {
    std::vector<float> VertexBufferObject = VBOGen(1);
}

// Generate the VBO
std::vector<float> VBO::VBOGen(int BufferSize) {
    int ActiveObjectBufferSize = _VBO->ActiveObjectBuffer->size();  // Get the ActiveObjectBuffer size
    _VBO->ActiveObjectBuffer->reserve(ActiveObjectBufferSize+BufferSize);                  // Reserve the space based on the function input
    return *_VBO->ActiveObjectBuffer;
}