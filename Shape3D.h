#ifndef SHAPE3D
#define SHAPE3D
#include "Shape.h"
class Shape3D : public Shape {
private:
	void virtual calculateVolume() = 0;
protected:
	float volume;
public:
	float getVolume();
	bool operator>(const Shape3D& other) const;
	bool operator<(const Shape3D& other) const;
	bool operator==(const Shape3D& other) const;
};
#endif
