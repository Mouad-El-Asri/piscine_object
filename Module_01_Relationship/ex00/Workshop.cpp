#include "Workshop.hpp"

Workshop::Workshop(const std::string &name) : name(name) {
	std::cout << "Workshop parametrized constructor called" << std::endl;
}

Workshop::Workshop(const Workshop &other) {
	(*this) = other;
	std::cout << "Workshop copy constructor called" << std::endl;
}

Workshop &Workshop::operator=(const Workshop &other) {
	if (this != &other) {
		//
	}
	std::cout << "Workshop copy assignment operator called" << std::endl;
	return (*this);
}

Workshop::~Workshop() {
	std::cout << "Workshop destructor called" << std::endl;
}

const std::string& Workshop::getName() const {
	return (this->name);
}

void Workshop::addWorker(Worker* worker) {
	this->workersRegistry.push_back(worker);
}

void Workshop::releaseWorker(Worker* worker) {
	std::vector<Worker *>::iterator it = std::find(this->workersRegistry.begin(), this->workersRegistry.end(), worker);
	if (it != this->workersRegistry.end())
		this->workersRegistry.erase(it);
}

void Workshop::executeWorkDay() {
	std::cout << "Workshop " << this->name << " is starting the work day :\n";
	for (unsigned int i = 0; i < this->workersRegistry.size(); i++)
		this->workersRegistry[i]->work();
}
