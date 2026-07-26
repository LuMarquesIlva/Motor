#pragma once

#include <vector>
#include <cstddef>

class Vector;

class Vector {
    private:
        std::vector<float> Fdata;
        std::vector<int> Idata;
    public:

        Vector() { this->GetFVector() = {0.0f}; this->GetVector() = {0}; };

        Vector(float array[]) {
            this->Fdata = std::vector<float>(*array);
        }

        Vector(int array[]) {
            this->Idata = std::vector<int>(*array);
        }

        Vector(std::vector<float> vec) {
            this->Fdata = vec;
        };

        void ConvertVectorFloat() {
            std::vector<float> FVec;
            for (int values : this->GetFVector()) {
                FVec.push_back(static_cast<float>(values));
            }
            this->Fdata = FVec;
        };

        Vector(int r, int g, int b, int a) {
            this->Idata = {r, g, b, a};
        }

        // Gets The Float Vector
        std::vector<float> GetFVector() {
            return Fdata;
        }
        
        // Gets The Integer Vector
        std::vector<int> GetVector() {
            return Idata;
        }

};