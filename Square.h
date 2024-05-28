#ifndef SQUARE
#define SQUARE
#include "Shape2D.h"
#include <string>
class Square : public Shape2D {
private:
	float side;
	void calculateArea() override;

public:
	Square(float _side);

	void scale(float scaleFactor) override;
	void showInfo() override;
	std::string getName() override;
};
#endif once
