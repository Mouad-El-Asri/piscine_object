#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Shape.hpp"

class Triangle : public Shape {
	private:
		double base;
		double height;
		double side1;
		double side2;

	public:
		Triangle(const double &base, const double &height, const double &side1, const double &side2);
		~Triangle();

		double area() const;
		double perimeter() const;
};

#endif