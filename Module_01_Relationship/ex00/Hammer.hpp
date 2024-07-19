#ifndef HAMMER_HPP
#define HAMMER_HPP

#include "Tool.hpp"

class Hammer: public Tool {
	public:
		Hammer();
		Hammer(const Hammer &other);
		Hammer &operator=(const Hammer &other);
		~Hammer();

		void use() override;
};

#endif