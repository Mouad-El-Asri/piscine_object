#include "Car.hpp"

Car::Car() : speed(0) {
	std::cout << "Car default constructor called" << std::endl;
}

Car::~Car() {
	std::cout << "Car destructor called" << std::endl;
}

void Car::start() {
	this->engine.start();
}

void Car::stop() {
	this->engine.stop();
	this->brake.apply_force_on_brakes(5);
	this->speed = 0;
}

void Car::accelerate(const int &value) {
	this->speed += value;
	std::cout << "Car accelerated to " << speed << " km/h" << std::endl;
}

void Car::shift_gears_up() {
	this->transmission.shift_gears_up();
}

void Car::shift_gears_down() {
	this->transmission.shift_gears_down();
}

void Car::reverse() {
	this->transmission.reverse();
}

void Car::turn_wheel(const int &angle) {
	this->wheel.turn_wheel(angle);
}

void Car::straighten_wheels() {
	this->wheel.straighten_wheels();
}

void Car::apply_force_on_brakes(const int &force) {
	this->brake.apply_force_on_brakes(force);
}

void Car::apply_emergency_brakes() {
	this->brake.apply_emergency_brakes();
	this->speed = 0;
}
