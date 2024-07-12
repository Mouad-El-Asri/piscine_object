#include "Position.hpp"

Position::Position(const int &x, const int &y, const int &z) : x(x), y(y), z(z) {
	std::cout << "Position constructor called" << std::endl;
}

Position::~Position() {
	std::cout << "Position destructor called" << std::endl;
}

const std::string &Position::getPositionString() const {
	std::stringstream ss;
	ss << "[ " << this->x << ", " << this->y << ", " << this->z << " ]";
	return ss.str();
}

void Position::setPosition(const int &x, const int &y, const int &z) {
	this->x = x, this->y = y, this->z = z;
	std::cout << "Position set to (" << x << ", " << y << ", " << z << ")" << std::endl;
}
