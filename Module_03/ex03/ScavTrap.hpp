#pragma once
#include <string>
#include "ClapTrap.hpp"
#include <iostream>


class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        ScavTrap& operator=(const ScavTrap &other);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);
};
