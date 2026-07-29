#pragma once

#include <vector>
#include <cstddef>

class Vector;

class Vector {
    private:
        std::vector<float> Fdata;
        std::vector<int> Idata;
    public:

        Vector() { this->GetFVector() = {0.0f}; this->GetIVector() = {0}; };

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

        void ConvertVectorInt() {
            std::vector<int> IVec;
            for (int values : this->GetIVector()) {
                IVec.push_back(static_cast<int>(values));
            }
            this->Idata = IVec;
        };

        Vector(int r, int g, int b, int a) {
            this->Idata = {r, g, b, a};
        }

        // Gets The Float const Vector
        const Vector GetFVector(bool RetConst) {
            const Vector CFdata = Fdata;
            if (RetConst == true) {
                return CFdata;
            }
        }

        // Gets The Float Vector
        std::vector<float> GetFVector() {
            return Fdata;
        }

        // Gets The Float Vector <Type const Vector> If True Is Added As Argument
        const Vector& GetVector() {
            return *this;
        }

        // Gets The Float Vector At Index
        float GetFVector(size_t index) {
            return Fdata[index];
        }

        // Gets The Float Vector At Index
        float GetFVector(int index) {
            return Fdata.at(index);
        }
        
        // Gets The Integer Vector
        std::vector<int> GetIVector() {
            return Idata;
        }

        // Gets The Integer Vector At Index
        int GetIVector(size_t index) {
            return Idata.at(index);
        }

        // Gets The Integer Vector At Index
        int GetIVector(int index) {
            return Idata.at(index);
        }

};