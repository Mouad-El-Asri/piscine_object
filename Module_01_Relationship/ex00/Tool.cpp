#include "Tool.hpp"

Tool::Tool() : numberOfUses(0) {
	std::cout << "Tool default constructor called" << std::endl;
}

Tool::~Tool() {
	std::cout << "Tool destructor called" << std::endl;
}

const int &Tool::getNumberOfUses() const {
	return (this->numberOfUses);
}
