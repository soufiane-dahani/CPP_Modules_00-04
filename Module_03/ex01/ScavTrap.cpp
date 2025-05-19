#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
    _name = "Default";
    _hit = 100;
    _energy = 50;
    _attack = 20;
    std::cout << "Default constructor called for ScavTrap: " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called for ScavTrap: " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hit = 100;
    _energy = 50;
    _attack = 20;
    std::cout << "Parameterized constructor called for ScavTrap: " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "Copy constructor called for ScavTrap: " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "Copy assignment operator called for ScavTrap: " << _name << std::endl;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
