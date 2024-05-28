?#include "Triangle.h"
#include <cstdio>
#include <string>

void Triangle::calculateArea() {
    area = height * base / 2.0f;
}

Triangle::Triangle(float _base, float _height) : base(_base), height(_height) {
    calculateArea();
}

void Triangle::scale(float scaleFactor) {
    this->base *= scaleFactor;
    this->height *= scaleFactor;
    calculateArea();
}

void Triangle::showInfo() {
    printf(
        "Я треугольник!\n"
        "Длина моего основания: %f\n"
        "Моя высота: %f\n"
        "Моя площадь: %f\n",
        base, height, area
    );
}

std::string Triangle::getName() {
    return "треугольник";
}