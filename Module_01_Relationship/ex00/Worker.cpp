#include "Worker.hpp"

Worker::Worker() : shovel(NULL) {
	std::cout << "Worker default constructor called" << std::endl;
}

Worker::Worker(const Position &position, const Statistic &statistic, Shovel *shovel) :
	position(position), statistic(statistic), shovel(shovel)
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
	takeShovelAway();
	std::cout << "Worker destructor called" << std::endl;
}

void Worker::setPosition(const Position &newPosition) {
	this->position = newPosition;
}

void Worker::setStatistic(const Statistic &newStatistic) {
	this->statistic = newStatistic;
}

void Worker::setShovel(Shovel* newShovel) {
    if (newShovel != this->shovel) {
        if (shovel) {
			std::cout << "Worker already has a shovel. Removing the current shovel." << std::endl;
            shovelRegistry[shovel] = NULL;
			this->shovel = NULL;
		}
		if (newShovel) {
			if (shovelRegistry[newShovel])
				shovelRegistry[newShovel]->takeShovelAway();
			shovel = newShovel;
			shovelRegistry[newShovel] = this;
			std::cout << "New shovel given to worker!" << std::endl;
		}
    }
}

void Worker::displayInfo() const {
	std::cout << "Position: " << this->position.getPositionString() << std::endl;
	std::cout << "Statistic: " << this->statistic.getStatisticString() << std::endl;
	std::cout << "Shovel number of uses: " << this->shovel->getNumberOfUses() << std::endl;
}

void Worker::useShovel() const {
	if (this->shovel) {
		this->shovel->use();
		std::cout << "Worker used the shovel!" << std::endl;
	}
	else
		std::cout << "Worker doesn't have a shovel!" << std::endl;
}

void Worker::takeShovelAway() {
	if (this->shovel) {
		shovelRegistry[this->shovel] = NULL;
		this->shovel = NULL;
		std::cout << "Shovel taken away from worker!" << std::endl;
	}
}

std::map<Shovel *, Worker *> Worker::shovelRegistry;
