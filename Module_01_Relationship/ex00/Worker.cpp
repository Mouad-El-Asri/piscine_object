#include "Worker.hpp"

Worker::Worker() : tool(NULL), id(nextId++) {
	std::cout << "Worker default constructor called" << std::endl;
}

Worker::Worker(const Position &position, const Statistic &statistic, Tool *tool) :
	position(position), statistic(statistic), id(nextId++)
{
	if (tool) {
		if (toolRegistry[tool])
			toolRegistry[tool]->takeToolAway();
		this->tool = tool;
		toolRegistry[tool] = this;
	}
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
	takeToolAway();
	std::cout << "Worker destructor called" << std::endl;
}

void Worker::setPosition(const Position &newPosition) {
	this->position = newPosition;
}

void Worker::setStatistic(const Statistic &newStatistic) {
	this->statistic = newStatistic;
}

void Worker::setTool(Tool* newTool) {
    if (newTool != this->tool) {
        if (tool) {
			std::cout << "Worker already has a tool. Removing the current tool." << std::endl;
            toolRegistry[tool] = NULL;
			this->tool = NULL;
		}
		if (newTool) {
			if (toolRegistry[newTool])
				toolRegistry[newTool]->takeToolAway();
			tool = newTool;
			toolRegistry[newTool] = this;
			std::cout << "New tool given to worker!" << std::endl;
		}
    }
}

void Worker::displayInfo() const {
	std::cout << "Position: " << this->position.getPositionString() << std::endl;
	std::cout << "Statistic: " << this->statistic.getStatisticString() << std::endl;
	if (this->tool)
		std::cout << "Tool number of uses: " << this->tool->getNumberOfUses() << std::endl;
}

void Worker::useTool() const {
	if (this->tool)
		this->tool->use();
	else
		std::cout << "Worker doesn't have a tool!" << std::endl;
}

void Worker::takeToolAway() {
	if (this->tool) {
		toolRegistry[this->tool] = NULL;
		this->tool = NULL;
		std::cout << "Tool taken away from worker!" << std::endl;
	}
}

void Worker::registerToWorkshop(Workshop *workshop) {
	this->workshopsRegistry.push_back(workshop);
	workshop->addWorker(this);
	std::cout << "Worker " << Worker::id << ": registered to " << workshop->getName() << std::endl;
}

void Worker::leaveWorkshop(Workshop *workshop) {
	std::vector<Workshop *>::iterator it = std::find(this->workshopsRegistry.begin(), this->workshopsRegistry.end(), workshop);
	if (it != this->workshopsRegistry.end()) {
		this->workshopsRegistry.erase(it);
		workshop->releaseWorker(this);
		std::cout << "Worker " << Worker::id << ": left " << workshop->getName() << std::endl;
	}
}

void Worker::work() const {
	std::cout << "Worker " << Worker::id << ": is working." << std::endl;
}

std::map<Tool *, Worker *> Worker::toolRegistry;
long Worker::nextId = 0;
