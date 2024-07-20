#include "Workshop.hpp"

Workshop::Workshop() {
	std::cout << "Workshop default constructor called" << std::endl;
}

Workshop::Workshop(const Workshop &other) {
	(*this) = other;
	std::cout << "Workshop copy constructor called" << std::endl;
}

// Workshop &Workshop::operator=(const Workshop &other) {
// 	std::cout << "Workshop copy assignment operator called" << std::endl;
// 	return (*this);
// }

Workshop::~Workshop() {
	std::cout << "Workshop destructor called" << std::endl;
}
