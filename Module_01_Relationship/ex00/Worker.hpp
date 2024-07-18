#ifndef WORKER_HPP
#define WORKER_HPP

#include <map>
#include "Position.hpp"
#include "Statistic.hpp"
#include "Shovel.hpp"

class Worker {
	private:
		Position position;
		Statistic statistic;
		Shovel *shovel;
		static std::map<Shovel *, Worker *> shovelRegistry;

	public:
		Worker();
		Worker(const Position &position, const Statistic &statistic, Shovel *shovel);
		Worker(const Worker &other);
		Worker &operator=(const Worker &other);
		~Worker();

		void setPosition(const Position &newPosition);
		void setStatistic(const Statistic &newStatistic);
		void setShovel(Shovel* newShovel);

		void displayInfo() const;
		void useShovel() const;
		void takeShovelAway();
};

#endif