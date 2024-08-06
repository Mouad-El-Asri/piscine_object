#ifndef CAR_HPP
#define CAR_HPP

#include "Engine.hpp"
#include "Transmission.hpp"
#include "Wheel.hpp"
#include "Brake.hpp"

class Car {
	private:
		Engine engine;
		Transmission transmission;
		Wheel wheel;
		Brake brake;
		int speed;

	public:
		Car();
		~Car();

		void start();
		void accelerate(const int &speed);
		void stop();
		void shift_gears_up();
		void shift_gears_down();
		void reverse();
		void turn_wheel(const int &angle);
		void straighten_wheels();
		void apply_force_on_brakes(const int &force);
		void apply_emergency_brakes();
};

#endif