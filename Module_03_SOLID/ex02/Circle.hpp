#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"
#include <cmath>

class Circle : public Shape {
	private:
		double radius;

	public:
		Circle(const double &radius);
		~Circle();

		double area() const;
		double perimeter() const;
};

#endif