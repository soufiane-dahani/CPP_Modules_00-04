#include "ClapTrap.hpp"

int main()
{
    ClapTrap ct1("Clappy");

    ct1.attack("calppy 2");
    ct1.takeDamage(3);
    ct1.beRepaired(5);


    ct1.takeDamage(20);
    ct1.attack("Ghost");
    ct1.beRepaired(10);

    return 0;
}
