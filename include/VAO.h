#pragma once

#include <Vector.h>
#include <VBO.h>

class VAO : public Vector {
    private:
        Vector Position;
        Vector Color;
    public:
        VAO() {
            SetPosition(0.0f, 0.0f, 0.0f);
            SetColor(0.0f, 0.0f, 0.0f);
        };

        // -- Position Attributes Functions --

        // Gets The Position
        Vector GetPosition() {
            return this->Position.GetFVector();
        }

        // Gets The Entire Position Vector Using <size_t> As Index
        float GetPosition(size_t index) {
            return this->Position.GetFVector(index);
        }

        // Gets The Position At Index
        float GetPosition(int index) {
            return this->Position.GetFVector(index);
        }

        // Sets The Position
        void SetPosition(float x, float y, float z) {
            this->Position.GetFVector() = {x, y, z};
        }
        
        // -- Color Attribute Functions --

        // Gets The Color
        Vector GetColor() {
            return this->Color;
        }

        // Sets The Color
        void SetColor(int r, int g, int b, int a) {
            this->Color.GetIVector() = {r, g, b, a};
        }

        void SetColor(float r, float g, float b) {
            this->Color.GetFVector() = {r, g, b};
        }
};