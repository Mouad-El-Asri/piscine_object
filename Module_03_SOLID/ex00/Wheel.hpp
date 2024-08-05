#ifndef WHEEL_HPP
#define WHEEL_HPP

#include <iostream>

class Wheel {
	public:
		Wheel();
		~Wheel();

		void turn_wheel(const int &angle);
		void straighten_wheels();
};

#endif