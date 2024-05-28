#ifndef CIRCLE
#define CIRCLE
#include "Shape2D.h"
#include <string>
class Circle : public Shape2D {
private:
	float radius;
	void calculateArea() override;

public:
	explicit Circle(float rad);
	void scale(float scaleFactor) override;
	void showInfo() override;
	std::string getName() override;
};
#endif
