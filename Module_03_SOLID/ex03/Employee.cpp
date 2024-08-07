#include "Employee.hpp"

Employee::Employee(const int &hourlyValue)
	: hourlyValue(hourlyValue), totalHoursWorked(0) {
	std::cout << "Employee constructor called" << std::endl;
}

Employee::~Employee() {
	std::cout << "Employee destructor called" << std::endl;
}

const int &Employee::getHourlyValue() const {
	return this->hourlyValue;
}

int Employee::getTotalHoursWorked() const {
	return this->totalHoursWorked;
}

int Employee::getTotalHoursNotWorked() const {
	return this->totalHoursNotWorked;
}

int Employee::executeWorkday() {
	std::cout << "One day of work has been executed" << std::endl;
	this->totalHoursWorked += 7;
	return 7;
}
