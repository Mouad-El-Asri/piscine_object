#ifndef STATISTIC_HPP
#define STATISTIC_HPP

#include <iostream>
#include <sstream>

struct Statistic {
	private:
		int level;
		int exp;

	public:
		Statistic(const int &level, const int &exp);
		~Statistic();

		void setLevel(const int &level);
		void setExp(const int &exp);
		const std::string &getStatisticString() const;
};

#endif