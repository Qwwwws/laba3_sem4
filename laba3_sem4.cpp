﻿#include "Circle.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "Square.h"
#include "Triangle.h"
#include "TriangularPyramid.h"
#include <iostream>

template<typename T>
void testShapes(T shape1, T shape2) {
	// Проверка getName
	std::cout << "Проверяем " << shape1.getName() << "\n";
	// Проверка getInfo
	shape1.showInfo();
	shape2.showInfo();
	// Проверка сравнений
	std::cout << "A > B: " << (shape1 > shape2 ? "true" : "false") << std::endl;
	std::cout << "A < B: " << (shape1 < shape2 ? "true" : "false") << std::endl;
	std::cout << "A == B: " << (shape1 == shape2 ? "true" : "false") << std::endl;
	// Проверка скейлинга
	shape1.scale(2.0f);
	shape1.showInfo();
	// Конец проверок
	printf("===================\n");
}

int main() {
	setlocale(LC_ALL, "rus");
	//copyright by Aiacaxapa & stanislavmedved
	system("start copyright.mp4");
	// круг
	{
		Circle circle1 = Circle(1.0f);
		Circle circle2 = Circle(2.0f);
		testShapes(circle1, circle2);
	}
	// цилиндр
	{
		Cylinder cyl1 = Cylinder(1.0f, 1.0f);
		Cylinder cyl2 = Cylinder(2.0f, 2.0f);
		testShapes(cyl1, cyl2);
	}
	// сфера
	{
		Sphere sphere1 = Sphere(1.0f);
		Sphere sphere2 = Sphere(2.0f);
		testShapes(sphere1, sphere2);
	}
	// квадрат
	{
		Square square1 = Square(1.0f);
		Square square2 = Square(2.0f);
		testShapes(square1, square2);
	}
	// треугольник
	{
		Triangle trig1 = Triangle(1.0f, 1.0f);
		Triangle trig2 = Triangle(2.0f, 2.0f);
		testShapes(trig1, trig2);
	}
	// пирамида
	{
		TriangularPyramid pyramid1 = TriangularPyramid(Triangle(1.0f, 1.0f), 1.0f);
		TriangularPyramid pyramid2 = TriangularPyramid(Triangle(2.0f, 2.0f), 2.0f);
		testShapes(pyramid1, pyramid2);
	}
	return 0;
}