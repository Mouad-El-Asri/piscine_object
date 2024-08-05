#include "Brake.hpp"

Brake::Brake() {
	std::cout << "Brake default constructor called" << std::endl;
}

Brake::~Brake() {
	std::cout << "Brake destructor called" << std::endl;
}

void Brake::apply_force_on_brakes(const int &force) {
	std::cout << force << " force applied to the brakes" << std::endl;
}

void Brake::apply_emergency_brakes() {
	std::cout << "Emergency brakes applied with maximum force" << std::endl;
}
