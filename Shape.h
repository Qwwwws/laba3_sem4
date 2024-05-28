#ifndef SHAPE
#define SHAPE
#include <string>

class Shape {
public:
	void virtual scale(float scaleFactor) = 0;
	void virtual showInfo() = 0;
	std::string virtual getName() = 0;
};
#endif