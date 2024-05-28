﻿#include "Square.h"
#include <cstdio>
#include <string>
void Square::calculateArea() {
    area = side * side;
}

Square::Square(float _side) : side(_side) {
    this->calculateArea();
}

void Square::scale(float scaleFactor) {
    side *= scaleFactor;
    this->calculateArea();
}
void Square::showInfo() {
    printf(
        "Я квадрат!\n"
        "Длина моей стороны: %f\n"
        "Моя площадь: %f\n",
        side, area
    );
}
std::string Square::getName() {
    return "квадрат";
}