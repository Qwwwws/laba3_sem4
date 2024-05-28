﻿#include "Shape3D.h"
float Shape3D::getVolume() { return this->volume; }
bool Shape3D::operator<(const Shape3D& other) const {
	return volume < other.volume;
}
bool Shape3D::operator>(const Shape3D& other) const {
	return volume > other.volume;
}
bool Shape3D::operator==(const Shape3D& other) const {
	return volume == other.volume;
}