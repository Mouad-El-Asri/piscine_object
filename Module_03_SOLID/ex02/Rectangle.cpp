#include "Rectangle.hpp"

Rectangle::Rectangle(const double &length, const double &width) : length(length), width(width) {
	std::cout << "Rectangle default constructor called" << std::endl;
}

Rectangle::~Rectangle() {
	std::cout << "Rectangle destructor called" << std::endl;
}

double Rectangle::area() const {
	return this->length * this->width;
}

double Rectangle::perimeter() const {
	return 2 * (this->length + this->width);
}
