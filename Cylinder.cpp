﻿#include "Cylinder.h"
#include <iostream>
void Cylinder::calculateVolume() {
    this->volume = this->base.getArea() * height;
}
void Cylinder::scale(float scaleFactor) {
    base.scale(scaleFactor);
    this->height *= scaleFactor;
    this->calculateVolume();
}
void Cylinder::showInfo() {
    std::cout << "Я цилиндр!\n"
        << "Моя высота = " << this->height << "\n"
        << "Площадь моего основания = " << this->base.getArea() << "\n"
        << "Мой объём = " << this->volume << "\n";
}
std::string Cylinder::getName() {
    return "Цилиндр";
}
Cylinder::Cylinder(float _radius, float _height) :height(_height), base(Circle(_radius)) {
    this->calculateVolume();
}