#pragma once
#include <string>


class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hit;
        unsigned int _energy;
        unsigned int _attack;

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
