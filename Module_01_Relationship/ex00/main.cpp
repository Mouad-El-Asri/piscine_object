#include "Worker.hpp"

int main() {
    Shovel shovel1 = Shovel();

    Worker worker1 = Worker();
    Worker worker2 = Worker();

    worker1.setShovel(&shovel1);

    worker2.setShovel(&shovel1);
    worker1.useShovel();
    worker2.useShovel();

    return 0;
}
