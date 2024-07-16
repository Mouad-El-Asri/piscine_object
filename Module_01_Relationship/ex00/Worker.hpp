#ifndef WORKER_HPP
#define WORKER_HPP

#include "Position.hpp"
#include "Statistic.hpp"

class Worker {
	private:
		Position position;
		Statistic statistic;

	public:
		Worker();
		Worker(const Position &position, const Statistic &statistic);
		Worker(const Worker &other);
		Worker &operator=(const Worker &other);
		~Worker();

		void displayInfo() const;
		void setPosition(const Position &newPosition);
		void setStatistic(const Statistic &newStatistic);
};

#endif