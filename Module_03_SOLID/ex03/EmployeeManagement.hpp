#ifndef EMPLOYEEMANAGEMENT_HPP
#define EMPLOYEEMANAGEMENT_HPP

#include "Employee.hpp"
#include <vector>

class EmployeeManager {
	private:
		std::vector<Employee *> employees;

	public:
		EmployeeManager();
		~EmployeeManager();

		void addEmployee(Employee *employee);
		void removeEmployee(Employee *employee);
		void executeWorkday() const;
		void calculatePayroll() const;
};

#endif