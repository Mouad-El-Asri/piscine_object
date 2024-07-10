#include "Vector2.hpp"

Vector2::Vector2(const float &x, const float &y) : x(x), y(y) {}
const float &Vector2::getX() const {
	return (this->x);
}
const float &Vector2::getY() const {
	return (this->y);
}