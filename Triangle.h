#pragma #ifndef TRIANGLE
#define TRIANGLE
#include "Shape2D.h"
#include <string>
class Triangle : public Shape2D {
private:
	float base;
	float height;
	void calculateArea() override;

public:
	Triangle(float _base, float _height);
	void scale(float scaleFactor) override;
	void showInfo() override;
	std::string getName() override;
};
#endif
