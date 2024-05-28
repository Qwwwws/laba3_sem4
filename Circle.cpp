﻿#include "Circle.h"
#include <string>
#include <iostream>

void Circle::calculateArea() {
    area = this->radius * this->radius * 3.14159265F;
}

void Circle::scale(float scaleFactor) {
    this->radius *= scaleFactor;
    this->calculateArea();
}

void Circle::showInfo() {
    setlocale(LC_ALL, "rus");
    std::cout << "Я круг!\n"
        << "Мой радиус = " << radius << '\n'
        << "Моя площадь = " << area << '\n';
}

std::string Circle::getName() {
    return "Круг";
}

Circle::Circle(float rad) : radius(rad) {
    this->calculateArea();
}