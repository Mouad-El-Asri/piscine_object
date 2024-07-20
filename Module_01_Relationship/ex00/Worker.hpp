#ifndef WORKER_HPP
#define WORKER_HPP

#include <map>
#include "Position.hpp"
#include "Statistic.hpp"
#include "Tool.hpp"
#include "Workshop.hpp"

class Workshop;

class Worker {
	private:
		Position position;
		Statistic statistic;
		Tool *tool;
		static std::map<Tool *, Worker *> toolRegistry;
		std::vector<Workshop *> workshopsRegistry;

		long id;
		static long nextId;

	public:
		Worker();
		Worker(const Position &position, const Statistic &statistic, Tool *tool);
		Worker(const Worker &other);
		Worker &operator=(const Worker &other);
		~Worker();

		void setPosition(const Position &newPosition);
		void setStatistic(const Statistic &newStatistic);
		void setTool(Tool* newTool);

		void displayInfo() const;
		void useTool() const;
		void takeToolAway();

		void registerToWorkshop(Workshop *workshop);
		void leaveWorkshop(Workshop *workshop);
		void work() const;
};

#endif