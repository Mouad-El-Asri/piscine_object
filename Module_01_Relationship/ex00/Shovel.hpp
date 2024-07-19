#ifndef SHOVEL_HPP
#define SHOVEL_HPP

#include "Tool.hpp"

class Shovel: public Tool {
	public:
		Shovel();
		Shovel(const Shovel &other);
		Shovel &operator=(const Shovel &other);
		~Shovel();

		void use() override;
};

#endif