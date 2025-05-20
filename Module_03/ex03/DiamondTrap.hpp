#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap , public ScavTrap 
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap& operator=(const DiamondTrap &other);
        ~DiamondTrap();
        void whoAmI();
        void attack(const std::string &target);
};
