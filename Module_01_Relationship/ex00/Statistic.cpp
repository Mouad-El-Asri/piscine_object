#include "Statistic.hpp"

Statistic::Statistic(const int &level, const int &exp) : level(level), exp(exp) {
	std::cout << "Statistic constructor called" << std::endl;
}

Statistic::~Statistic() {
	std::cout << "Statistic destructor called" << std::endl;
}

const std::string &Statistic::getStatisticString() const {
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
