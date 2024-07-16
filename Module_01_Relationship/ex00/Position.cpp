#include "Position.hpp"

Position::Position() : x(0), y(0), z(0) {
	std::cout << "Position default constructor called" << std::endl;
}

Position::Position(const int &x, const int &y, const int &z) : x(x), y(y), z(z) {
	std::cout << "Position parameterized constructor called" << std::endl;
}

Position::Position(const Position &other) {
	(*this) = other;
	std::cout << "Position copy constructor called\n";
}

Position &Position::operator=(const Position &other) {
	if (this != &other) {
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
	}
	std::cout << "Position copy assignment operator called\n";
	return (*this);
}

Position::~Position() {
	std::cout << "Position destructor called" << std::endl;
}

const std::string Position::getPositionString() const {
	std::stringstream ss;
	ss << "[ " << this->x << ", " << this->y << ", " << this->z << " ]";
	return ss.str();
}

void Position::setPosition(const int &x, const int &y, const int &z) {
	this->x = x, this->y = y, this->z = z;
	std::cout << "Position set to (" << x << ", " << y << ", " << z << ")" << std::endl;
}
