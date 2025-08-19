#pragma once
#include <string>


class ClapTrap
{
    protected:
        std::string _name;
        long long _hit;
        long long _energy;
        long long _attack;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator=(const ClapTrap &other);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
