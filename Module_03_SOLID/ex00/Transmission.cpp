#include "Transmission.hpp"

Transmission::Transmission() {
	std::cout << "Transmission default constructor called" << std::endl;
}

Transmission::~Transmission() {
	std::cout << "Transmission destructor called" << std::endl;
}

void Transmission::shift_gears_up() {
	std::cout << "Shifted up to the next gear" << std::endl;
}

void Transmission::shift_gears_down() {
	std::cout << "Shifted down to the previous gear" << std::endl;
}

void Transmission::reverse() {
	std::cout << "Transmission in reverse" << std::endl;
}
