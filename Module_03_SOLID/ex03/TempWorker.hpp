#ifndef TEMPWORKER_HPP
#define TEMPWORKER_HPP

#include "Employee.hpp"

class TempWorker : public Employee {
	private:
		int totalHoursRegistered;

	public:
		TempWorker(const int &hourlyValue);
		~TempWorker();

		void registerHours(int hours);
		int executeWorkday();
};

#endif