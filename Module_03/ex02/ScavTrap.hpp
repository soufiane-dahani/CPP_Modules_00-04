#ifndef CLAVTRAP_HHP
#define CLAVTRAP_HHP
#include <string>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        ScavTrap& operator=(const ScavTrap &other);
        ~ScavTrap();
        void guardGate();
};

#endif