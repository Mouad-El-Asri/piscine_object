#include "Worker.hpp"
#include "Shovel.hpp"

int main() {
    Shovel shovel1 = Shovel();

    Worker worker1 = Worker();
    Worker worker2 = Worker();

    worker1.setTool(&shovel1);

    worker2.setTool(&shovel1);
    worker1.useTool();
    worker2.useTool();

    return 0;
}
