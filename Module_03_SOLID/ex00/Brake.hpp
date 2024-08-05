#ifndef BRAKE_HPP
#define BRAKE_HPP

#include <iostream>

class Brake {
	public:
		Brake();
		~Brake();

		void apply_force_on_brakes(const int &force);
		void apply_emergency_brakes();
};

#endif