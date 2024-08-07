#include "Apprentice.hpp"

Apprentice::Apprentice(const int &hourlyValue) : ContractEmployee(hourlyValue), totalSchoolHours(0) {
	std::cout << "Apprentice default constructor called" << std::endl;
}

Apprentice::~Apprentice() {
	std::cout << "Apprentice destructor called" << std::endl;
}

void Apprentice::attendSchool(int hours) {
	this->totalSchoolHours += hours;
	this->totalHoursNotWorked += hours;
}

int Apprentice::getTotalHoursWorked() const {
	int totalPaidHours = this->totalHoursWorked;
	totalPaidHours += (totalSchoolHours * 0.5);
	return totalPaidHours;
}
