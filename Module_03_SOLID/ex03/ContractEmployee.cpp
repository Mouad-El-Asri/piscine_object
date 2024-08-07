#include "ContractEmployee.hpp"

ContractEmployee::ContractEmployee(const int &hourlyValue) : Employee(hourlyValue) {
	std::cout << "ContractEmployee default constructor called" << std::endl;
}

ContractEmployee::~ContractEmployee() {
	std::cout << "ContractEmployee destructor called" << std::endl;
}

void ContractEmployee::recordNotWorkedHours(int hours) {
	this->totalHoursNotWorked += hours;
}
