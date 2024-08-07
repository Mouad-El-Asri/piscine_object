#ifndef APPRENTICE_HPP
#define APPRENTICE_HPP

#include "Employee.hpp"
#include "ContractEmployee.hpp"

class Apprentice : public ContractEmployee {
	private:
		int totalSchoolHours;

	public:
		Apprentice(const int &hourlyValue);
		~Apprentice();

		void attendSchool(int hours);
		int getTotalHoursWorked() const;
};

#endif