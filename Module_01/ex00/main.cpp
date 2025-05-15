#include "Zombie.hpp"

int main() {
    Zombie* heapZombie = newZombie("HeapOne");
    heapZombie->announce();
    delete heapZombie;

    randomChump("StackOne");
}
