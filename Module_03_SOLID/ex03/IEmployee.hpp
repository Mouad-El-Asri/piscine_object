#ifndef IEMPLOYEE_HPP
#define IEMPLOYEE_HPP

class IEmployee {
	public:
		virtual ~IEmployee() {};
		virtual const int &getHourlyValue() const = 0;
		virtual int getTotalHoursWorked() const = 0;
		virtual int getTotalHoursNotWorked() const = 0;
		virtual int executeWorkday() = 0;
};

#endif