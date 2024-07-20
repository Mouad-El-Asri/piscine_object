#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

#include <vector>
#include <algorithm>
#include "Worker.hpp"

class Worker;

class Workshop {
	private:
		std::string name;
		std::vector<Worker *> workersRegistry;

	public:
		Workshop(const std::string &name);
		Workshop(const Workshop &other);
		Workshop &operator=(const Workshop &other);
		~Workshop();

		const std::string& getName() const;

		void addWorker(Worker* worker);
		void releaseWorker(Worker* worker);
		void executeWorkDay();
};

#endif