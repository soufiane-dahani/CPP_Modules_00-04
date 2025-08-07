#include "ClapTrap.hpp"
#include <climits>
#include <iostream>

ClapTrap::ClapTrap()
    : _name("Default"), _hit(10), _energy(10), _attack(0)
{
    std::cout << "Default constructor called for ClapTrap: " << _name << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor called for CalpTrap " << _name << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
    std::cout << "constructor parameterized  called for ClapTrap: " << _name << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other) 
    : _name(other._name), _hit(other._hit), _energy(other._energy), _attack(other._attack) {
        std::cout << "Copy constructor called for ClapTrap: " << _name << std::endl;
    }
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        std::cout << "Assignment operator called for ClapTrap: " << _name << std::endl;
        this->_attack = other._attack;
        this->_name = other._name;
        this->_hit = other._hit;
        this->_energy = other._energy;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hit <= 0 || _energy <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy or is dead and can't attack." << std::endl;
        return;
    }

    _energy--;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attack << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit <= 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead and can't take more damage." << std::endl;
        return;
    }

    if (amount >= static_cast<unsigned int>(_hit))
        _hit = 0;
    else
        _hit -= amount;

    std::cout << "ClapTrap " << _name << " takes " << amount
              << " points of damage! Hit points now: " << _hit << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit <= 0 || _energy <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't repair because it's either dead or out of energy." << std::endl;
        return;
    }

    if (_hit > INT_MAX - static_cast<int>(amount))
        _hit = INT_MAX;
    else
        _hit += amount;

    _energy--;

    std::cout << "ClapTrap " << _name << " is repaired by " << amount
              << " points! Hit points now: " << _hit
              << ", energy left: " << _energy << std::endl;
}
