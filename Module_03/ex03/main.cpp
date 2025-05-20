#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "---------------------------Creating default DiamondTrap...-----------------------------\n";
    DiamondTrap dt1;
    dt1.attack("enemy");
    dt1.whoAmI();

    std::cout << "\n--------------------------------Creating parameterized DiamondTrap...---------------------------\n";
    DiamondTrap dt2("Diamond");
    dt2.attack("monster");
    dt2.highFivesGuys();
    dt2.guardGate();
    dt2.whoAmI();

    std::cout << "\n--------------------Copying DiamondTrap...-----------------------------------------------------\n";
    DiamondTrap dt3 = dt2;
    dt3.whoAmI();

    std::cout << "\n---------------------Assigning DiamondTrap...--------------------------------------------------\n";
    dt1 = dt3;
    dt1.whoAmI();

    std::cout << "--------------------------------------End of main, destructors called automatically...---------------------\n";
    return 0;
}
