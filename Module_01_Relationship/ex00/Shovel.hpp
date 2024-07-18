#ifndef SHOVEL_HPP
#define SHOVEL_HPP

#include <iostream>

class Shovel {
	private:
		int numberOfUses;
	public:
		Shovel();
		Shovel(const Shovel &other);
		Shovel &operator=(const Shovel &other);
		~Shovel();

		const int &getNumberOfUses() const;
		void use();
};

#endif