#pragma once
#include <string>
#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap& operator=(const FragTrap &other);
        ~FragTrap();
        void highFivesGuys(void);
        void attack(const std::string& target);
};
