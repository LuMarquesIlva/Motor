#include <iostream>
#include <VBO.h>

VBO::VBO() {
    B_ARRAY_BUFFER = {};
    F_ARRAY_BUFFER = {};
}

void VBO::VBOGenData(std::vector<float> vertices) {
    BackObjectBuffer = vertices;
    std::cout << "LOG: Generated VBO Data" << std::endl;
}

void VBO::Swap() {
    F_ARRAY_BUFFER = B_ARRAY_BUFFER;
    B_ARRAY_BUFFER.clear();
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