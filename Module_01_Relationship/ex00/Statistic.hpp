#ifndef STATISTIC_HPP
#define STATISTIC_HPP

#include <iostream>
#include <sstream>

struct Statistic {
	private:
		int level;
		int exp;

	public:
		Statistic();
		Statistic(const int &level, const int &exp);
		Statistic(const Statistic &other);
		Statistic &operator=(const Statistic &other);
		~Statistic();

		void setLevel(const int &level);
		void setExp(const int &exp);
		const std::string getStatisticString() const;
};

#endif