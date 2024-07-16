#include "Statistic.hpp"

Statistic::Statistic() : level(0), exp(0) {
	std::cout << "Statistic default constructor called" << std::endl;
}

Statistic::Statistic(const int &level, const int &exp) : level(level), exp(exp) {
	std::cout << "Statistic parameterized constructor called" << std::endl;
}

Statistic::Statistic(const Statistic &other) {
	(*this) = other;
	std::cout << "Statistic copy constructor called" << std::endl;
}

Statistic &Statistic::operator=(const Statistic &other) {
	if (this != &other) {
		this->exp = other.exp;
		this->level = other.level;
	}
	std::cout << "Statistic copy assignment operator called" << std::endl;
	return (*this);
}

Statistic::~Statistic() {
	std::cout << "Statistic destructor called" << std::endl;
}

const std::string Statistic::getStatisticString() const {
	std::stringstream ss;
	ss << "[ Level: " << this->level << ", Exp: " << this->exp << " ]";
	return ss.str();
}

void Statistic::setLevel(const int &level) {
	this->level = level;
	std::cout << "Level set to " << level << std::endl;
}

void Statistic::setExp(const int &exp) {
	this->exp = exp;
	std::cout << "Exp set to " << exp << std::endl;
}
