#include "Worker.hpp"

Worker::Worker() {
	std::cout << "Worker default constructor called" << std::endl;
}

Worker::Worker(const Position &position, const Statistic &statistic) :
	position(position), statistic(statistic)
{
	std::cout << "Worker parameterized constructor called" << std::endl;
}

Worker::Worker(const Worker &other) {
	(*this) = other;
	std::cout << "Worker copy constructor called\n";
}

Worker &Worker::operator=(const Worker &other) {
	if (this != &other) {
		this->position = other.position;
		this->statistic = other.statistic;
	}
	std::cout << "Worker copy assignment operator called\n";
	return (*this);
}

Worker::~Worker() {
	std::cout << "Worker destructor called" << std::endl;
}

void Worker::setPosition(const Position &newPosition) {
	this->position = newPosition;
}

void Worker::setStatistic(const Statistic &newStatistic) {
	this->statistic = newStatistic;
}

void Worker::displayInfo() const {
	std::cout << "Position: " << position.getPositionString() << std::endl;
	std::cout << "Statistic: " << statistic.getStatisticString() << std::endl;
}
