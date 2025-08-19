#include <iostream>
#include "FragTrap.hpp"

int main() {
    std::cout << "----- Create FragTrap -----" << std::endl;
    FragTrap a("Fraggy");

    std::cout << "\n----- Use Special Ability -----" << std::endl;
    a.highFivesGuys();
    a.attack("ff");

    std::cout << "\n----- Copy FragTrap -----" << std::endl;
    FragTrap b(a);

    std::cout << "\n----- Assign FragTrap -----" << std::endl;
    FragTrap c;
    c = a;

    std::cout << "\n----- End of Scope -----" << std::endl;
    return 0;
}

