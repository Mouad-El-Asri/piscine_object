#include "Wheel.hpp"

Wheel::Wheel() {
	std::cout << "Wheel default constructor called" << std::endl;
}

Wheel::~Wheel() {
	std::cout << "Wheel destructor called" << std::endl;
}

void Wheel::turn_wheel(const int &angle) {
	std::cout << "Wheels turned by " << angle << " degrees" << std::endl;
}

void Wheel::straighten_wheels() {
	std::cout << "Wheels straightened" << std::endl;
}
