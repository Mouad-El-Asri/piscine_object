#include "EmployeeManagement.hpp"

EmployeeManager::EmployeeManager() {
	std::cout << "EmployeeManager default constructor called" << std::endl;
}

EmployeeManager::~EmployeeManager() {
	std::cout << "EmployeeManager destructor called" << std::endl;
}

void EmployeeManager::addEmployee(Employee *employee) {
	this->employees.push_back(employee);
}

void EmployeeManager::removeEmployee(Employee *employee) {
	std::vector<Employee *>::iterator it;
	for (it = this->employees.begin(); it != this->employees.end(); ++it) {
		if (*it == employee)
			this->employees.erase(it);
	}
}

void EmployeeManager::executeWorkday() const {
	std::vector<Employee *>::const_iterator it;
	for (it = this->employees.begin(); it != this->employees.end(); ++it) {
		(*it)->executeWorkday();
	}
}

void EmployeeManager::calculatePayroll() const {
	std::vector<Employee *>::const_iterator it;
	for (it = this->employees.begin(); it != this->employees.end(); ++it) {
		std::cout << "Employee Pay for the month: " << (*it)->getTotalHoursWorked() * (*it)->getHourlyValue() << std::endl;
	}
}

