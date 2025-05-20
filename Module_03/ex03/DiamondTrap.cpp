#include "DiamondTrap.hpp"
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap("Default"), ScavTrap("Default"), _name("Default")
{
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
    std::cout << "Default constructor called for DiamondTrap: " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called for DiamondTrap: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
    std::cout << "Parameterized constructor called for DiamondTrap: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
    std::cout << "Copy constructor called for DiamondTrap: " << _name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
    ClapTrap::operator=(other);
    _name = other._name;
    std::cout << "Copy assignment operator called for DiamondTrap: " << _name << std::endl;
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << _name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}