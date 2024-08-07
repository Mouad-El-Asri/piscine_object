#ifndef CONTRACTEMPLOYEE_HPP
#define CONTRACTEMPLOYEE_HPP

#include "Employee.hpp"

class ContractEmployee : public Employee {
	public:
		ContractEmployee(const int &hourlyValue);
		~ContractEmployee(); 

		virtual void recordNotWorkedHours(int hours);
};

#endif