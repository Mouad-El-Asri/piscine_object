#ifndef TOOL_HPP
#define TOOL_HPP

#include <iostream>

class Tool {
	protected:
		int numberOfUses;

	public:
		Tool();
		virtual ~Tool();

		const int &getNumberOfUses() const;
		virtual void use() = 0;
};

#endif