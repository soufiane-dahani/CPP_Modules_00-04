#include "Character.hpp"
#include <iostream>
#include <ostream>

Character::Character()
{
    _name = "Default";
    int i = 0;
    while (i < 4)
    {
        _inventory[i] = nullptr;
        i++;
    }
    std::cout << "Default constructor called for Character: " << _name << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
    std::cout << "Destructor called for Character: " << _name << std::endl;
}

Character::Character(std::string name)
{
    _name = name;
    int i = 0;
    while (i < 4)
    {
        _inventory[i] = nullptr;
        i++;
    }
    std::cout << "Parameterized constructor called for Character: " << name << std::endl;
}

Character::Character(const Character &other) : _name(other._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = nullptr;
    }
    std::cout << "Copy constructor called for Character: " << _name << std::endl;
}
Character& Character::operator=(const Character &other)
{
    if (this != &other)
    {
        _name = other._name;
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete _inventory[i];
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = nullptr;
        }
        std::cout << "Copy assignment operator called for Character" << std::endl;
    }
    return *this;
}


std::string const & Character::getName() const
{
    return _name;
};

void Character::equip(AMateria* m)
{
    if (!m)
        return;

    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == nullptr)
        {
            _inventory[i] = m;
            std::cout << _name << " equips " << m->getType() 
                      << " in slot " << i << std::endl;
            return;
        }
    }

    std::cout << _name << "'s inventory is full. Cannot equip " 
              << m->getType() << std::endl;
};

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
        return;

    if (_inventory[idx] != nullptr)
    {
        std::cout << _name << " unequipped " << _inventory[idx]->getType() 
                  << " from slot " << idx << std::endl;

        _inventory[idx] = nullptr;
    }
};

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
        return;
    if (_inventory[idx] != nullptr)
        _inventory[idx]->use(target);
};
