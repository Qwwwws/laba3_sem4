#ifndef SHAPE2D
#define SHAPE2D
#include "Shape.h"
class Shape2D : public Shape {
private:
	void virtual calculateArea() = 0;
protected:
	float area;
public:
	float getArea();
	bool operator>(const Shape2D& other) const;
	bool operator<(const Shape2D& other) const;
	bool operator==(const Shape2D& other) const;
};
#endif
