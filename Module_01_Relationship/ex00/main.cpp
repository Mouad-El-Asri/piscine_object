#include "Worker.hpp"
#include "Shovel.hpp"

int main() {
	Position position = Position(10, 5, 3);
	Statistic statistic = Statistic(13, 925);
    Tool *shovel1 = new Shovel();
	Workshop workshop_1 = Workshop("Workshop 1");

    Worker worker1 = Worker(position, statistic, shovel1);
    Worker worker2 = Worker(position, statistic, shovel1);

    worker1.useTool();
    worker2.useTool();
	worker2.displayInfo();

	worker1.registerToWorkshop(&workshop_1);
	worker2.registerToWorkshop(&workshop_1);

	workshop_1.executeWorkDay();

	worker1.leaveWorkshop(&workshop_1);

	workshop_1.executeWorkDay();

	delete shovel1;

    return 0;
}
