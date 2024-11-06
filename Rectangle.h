#pragma once

#include <stdio.h>
#include <iostream>
#include "IShape.h"

class Rectangle : public IShape {
public:
    Rectangle(float width, float height) : Width(width), Height(height), Area(0.0) {}

    void Size() override {
        Area = Width * Height;
    }

    void Draw() override {
        std::cout << "Rectangle Area : " << Area << std::endl;
    }

private:
    float Width;
    float Height;
    float Area;
};
