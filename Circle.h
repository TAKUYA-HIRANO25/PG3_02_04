#pragma once
#include "IShape.h"
#include <iostream>
#include <stdio.h>

class Circle : public IShape {
public:
    Circle(float radius) : Radius(radius), Area(0.0) {}

    void Size() override {
        Area = 3.14f * Radius * Radius;
    }

    void Draw() override {
        std::cout << "Circle Area : " << Area << std::endl;
    }

private:
    float Radius;
    float Area;
};
