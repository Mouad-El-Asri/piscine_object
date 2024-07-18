#include "Shovel.hpp"

Shovel::Shovel() : numberOfUses(0) {
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

const int &Shovel::getNumberOfUses() const {
	return (this->numberOfUses);
}

void Shovel::use() {
	this->numberOfUses++;
}
