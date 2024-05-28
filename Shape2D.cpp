#include "Shape2D.h"
float Shape2D::getArea() { return area; }
bool Shape2D::operator<(const Shape2D& other) const {
	return area < other.area;
}
bool Shape2D::operator>(const Shape2D& other) const {
	return area > other.area;
}
bool Shape2D::operator==(const Shape2D& other) const {
	return area == other.area;
}