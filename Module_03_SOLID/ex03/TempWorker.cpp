#include "TempWorker.hpp"

TempWorker::TempWorker(const int &hourlyValue) : Employee(hourlyValue), totalHoursRegistered(0) {
	std::cout << "TempWorker default constructor called" << std::endl;
}

TempWorker::~TempWorker() {
	std::cout << "TempWorker destructor called" << std::endl;
}

void TempWorker::registerHours(int hours) {
	this->totalHoursRegistered += hours;
}

int TempWorker::executeWorkday() {
	registerHours(7);
	return Employee::executeWorkday();
}
