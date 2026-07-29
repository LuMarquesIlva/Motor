#include <iostream>
#include <VBO.h>

VBO::VBO() {
    this->B_ARRAY_BUFFER = {0.0f};
    this->F_ARRAY_BUFFER = {0.0f};
}

void VBO::VBOGenData(Vector vertices) {
    BackObjectBuffer = vertices.GetFVector();
    std::cout << "LOG: Generated VBO Data" << std::endl;
}

void VBO::Swap() {
    this->F_ARRAY_BUFFER.clear();
    this->F_ARRAY_BUFFER = this->B_ARRAY_BUFFER;
    this->B_ARRAY_BUFFER.clear();
};

void VBO::Bind() {
    F_ARRAY_BUFFER.at(BackObjectBufferSize-1);
}

void VBO::Unbind() {
    F_ARRAY_BUFFER.clear();
}

void VBO::Delete() {
    F_ARRAY_BUFFER.resize(0);
}