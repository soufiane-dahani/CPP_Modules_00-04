#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("Default")
{
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
void ScavTrap::attack(const std::string& target)
{
    if (_hit <= 0 || _energy <= 0)
    {
        std::cout << "ScavTrap " << _name << " has no energy or is dead and can't attack." << std::endl;
        return;
    }

    _energy--;
    std::cout << "ScavTrap " << _name << " attacks " << target
              << ", causing " << _attack << " points of damage!" << std::endl;
}
