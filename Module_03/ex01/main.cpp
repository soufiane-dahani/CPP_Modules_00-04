#include "ScavTrap.hpp"
#include <iostream>

int main() {
    std::cout << "---- Creating ScavTrap A ----" << std::endl;
    ScavTrap a("Guardian");

    std::cout << "\n---- Calling attack() ----" << std::endl;
    a.attack("EnemyBot");

    std::cout << "\n---- Calling takeDamage() ----" << std::endl;
    a.takeDamage(30);

    std::cout << "\n---- Calling beRepaired() ----" << std::endl;
    a.beRepaired(20);

    std::cout << "\n---- Calling guardGate() ----" << std::endl;
    a.guardGate();

    std::cout << "\n---- Creating ScavTrap B by copy ----" << std::endl;
    ScavTrap b = a;

    std::cout << "\n---- Assigning ScavTrap C = A ----" << std::endl;
    ScavTrap c;
    c = a;

    std::cout << "\n---- Destructors will be called automatically ----" << std::endl;
    return 0;
}
