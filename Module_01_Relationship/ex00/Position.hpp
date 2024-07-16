#ifndef POSITION_HPP
#define POSITION_HPP

#include <iostream>
#include <sstream>

struct Position {
	private:
		int x;
		int y;
		int z;
	public:
		Position();
		Position(const int &x, const int &y, const int &z);
		Position(const Position &other);
		Position &operator=(const Position &other);
		~Position();

		void setPosition(const int &x, const int &y, const int &z);
		const std::string getPositionString() const;
};

#endif