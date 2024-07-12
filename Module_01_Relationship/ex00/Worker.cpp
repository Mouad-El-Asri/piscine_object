#include "Worker.hpp"

Worker::Worker(const Position &position, const Statistic &statistic) :
	position(position), statistic(statistic)
{
	std::cout << "Worker constructor called" << std::endl;
}

Worker::~Worker() {
	std::cout << "Worker destructor called" << std::endl;
}

void Worker::displayInfo() const {
	std::cout << "Position: " << position.getPositionString() << std::endl;
	std::cout << "Statistic: " << statistic.getStatisticString() << std::endl;
}
