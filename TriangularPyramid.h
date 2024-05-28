#ifndef TRIANGULAR_PYRAMID
#define TRIANGULAR_PYRAMID
#include "Shape3D.h"
#include "Triangle.h"
#include <string>
class TriangularPyramid : public Shape3D {
private:
	Triangle base;
	float height;
	void calculateVolume() override;
public:
	TriangularPyramid(Triangle _base, float _height);

	void scale(float scaleFactor) override;
	void showInfo() override;
	std::string getName() override;
};
#endif