#include "Hammer.hpp"

Hammer::Hammer() {
	std::cout << "Hammer default constructor called" << std::endl;
}

Hammer::Hammer(const Hammer &other) {
	(*this) = other;
	std::cout << "Hammer copy constructor called" << std::endl;
}

Hammer &Hammer::operator=(const Hammer &other) {
	if (this != &other)
		this->numberOfUses = other.numberOfUses;
	std::cout << "Hammer copy assignment opeartor called" << std::endl;
	return (*this);
}

Hammer::~Hammer() {
	std::cout << "Hammer destructor called" << std::endl;
}

void Hammer::use() {
	this->numberOfUses++;
	std::cout << "The Hammer has been used" << std::endl;
}
