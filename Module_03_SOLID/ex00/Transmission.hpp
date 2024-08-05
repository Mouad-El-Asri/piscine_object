#ifndef TRANSMISSION_HPP
#define TRANSMISSION_HPP

#include <iostream>

class Transmission {
	public:
		Transmission();
		~Transmission();

		void shift_gears_up();
		void shift_gears_down();
		void reverse();
};

#endif