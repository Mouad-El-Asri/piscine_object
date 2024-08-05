#include "Car.hpp"

Car::Car() : speed(0) {
	std::cout << "Car default constructor called" << std::endl;
}

Car::~Car() {
	std::cout << "Car destructor called" << std::endl;
}

void Car::start();
void Car::stop();

void Car::accelerate(const int &value) {
	this->speed += value;
	std::cout << "Car accelerated to " << speed << " km/h" << std::endl;
}

void Car::shift_gears_up();
void Car::shift_gears_down();
void Car::reverse();
void Car::turn_wheel(const int &angle);
void Car::straighten_wheels();
void Car::apply_force_on_brakes(const int &force);
void Car::apply_emergency_brakes();