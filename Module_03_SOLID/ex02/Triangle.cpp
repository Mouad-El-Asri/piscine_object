#include "Triangle.hpp"

Triangle::Triangle(const double &base, const double &height, const double &side1, const double &side2)
	: base(base), height(height), side1(side1), side2(side2) {
	std::cout << "Triangle default constructor called" << std::endl;
}

Triangle::~Triangle() {
	std::cout << "Triangle destructor called" << std::endl;
}

double Triangle::area() const {
	return 0.5 * this->height * this->base;
}

double Triangle::perimeter() const {
	return this->base + this->side1 + this->side2;
}
