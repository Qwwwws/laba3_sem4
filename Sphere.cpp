#include "Sphere.h"
#include <string>
void Sphere::calculateVolume() {
    volume = radius * radius * radius * 3.14159265F * 4 / 3;
}

Sphere::Sphere(float rad) : radius(rad) {
    calculateVolume();
}

void Sphere::scale(float scaleFactor) {
    this->radius *= scaleFactor;
    calculateVolume();
}
void Sphere::showInfo() {
    printf("� �����!\n"
        "��� ������: %f\n"
        "��� �����: %f\n",
        radius, volume);
}
std::string Sphere::getName() {
    return "�����";
}