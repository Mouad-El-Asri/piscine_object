#ifndef WORKER_HPP
#define WORKER_HPP

#include "Position.hpp"
#include "Statistic.hpp"

class Worker {
	private:
		Position position;
		Statistic statistic;

	public:
		Worker(const Position &position, const Statistic &statistic);
		~Worker();

		void displayInfo() const;
};

#endif