#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape {
	private:
		double length;
		double width;

	public:
		Rectangle(const double &length, const double &width);
		~Rectangle();

		double area() const;
		double perimeter() const;
};

#endif