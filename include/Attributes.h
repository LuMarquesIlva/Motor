#pragma once

#include <Vector.h>

class Attributes {
    private:
        Vector Position;
        Vector Color = {0.0f, 0.0f, 0.0f, 0.0f};
    public:
        Attributes() {
            SetPosition(0.0f, 0.0f, 0.0f);
            SetColor(0, 0, 0, 0);
        };

        // -- Position Attributes Functions --

        // Gets The Position
        Vector GetPosition() {
            return this->Position;
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
            this->Color.GetVector() = {r, g, b, a};
        }
};