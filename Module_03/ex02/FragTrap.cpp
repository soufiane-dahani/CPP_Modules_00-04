
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("Default")
{
    _hit = 100;
    _energy = 100;
    _attack = 30;
    std::cout << "Default constructor called for FragTrap: " << _name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called for FragTrap: " << _name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit = 100;
    _energy = 100;
    _attack = 30;
    std::cout << "Parameterized constructor called for FragTrap: " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "Copy constructor called for FragTrap: " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "Copy assignment operator called for FragTrap: " << _name << std::endl;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests high fives! ✋😁" << std::endl;
}
