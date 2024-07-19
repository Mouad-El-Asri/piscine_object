#include "Shovel.hpp"

Shovel::Shovel() {
	std::cout << "Shovel default constructor called" << std::endl;
}

Shovel::Shovel(const Shovel &other) {
	(*this) = other;
	std::cout << "Shovel copy constructor called" << std::endl;
}

Shovel &Shovel::operator=(const Shovel &other) {
	if (this != &other)
		this->numberOfUses = other.numberOfUses;
	std::cout << "Shovel copy assignment opeartor called" << std::endl;
	return (*this);
}

Shovel::~Shovel() {
	std::cout << "Shovel destructor called" << std::endl;
}

void Shovel::use() {
	this->numberOfUses++;
	std::cout << "The Shovel has been used" << std::endl;
}
