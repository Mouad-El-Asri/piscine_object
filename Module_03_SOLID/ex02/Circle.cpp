#include "Circle.hpp"

Circle::Circle(const double &radius) : radius(radius) {
	std::cout << "Circle default constructor called" << std::endl;
}

Circle::~Circle() {
	std::cout << "Circle destructor called" << std::endl;
}

double Circle::area() const {
	return M_PI * this->radius * this->radius;
}

double Circle::perimeter() const {
	return 2 * M_PI * this->radius;
}
