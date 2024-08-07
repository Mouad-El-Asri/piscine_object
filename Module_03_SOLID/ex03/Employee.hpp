#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include "IEmployee.hpp"
#include <iostream>

class Employee : public IEmployee {
	protected:
		int hourlyValue;
		int totalHoursWorked;
		int totalHoursNotWorked;

	public:
		Employee(const int &hourlyValue);
		virtual ~Employee();

		const int &getHourlyValue() const;
		int getTotalHoursWorked() const;
		int getTotalHoursNotWorked() const;
		int executeWorkday();
};

#endif