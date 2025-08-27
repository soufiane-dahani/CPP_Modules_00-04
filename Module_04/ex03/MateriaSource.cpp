#include "MateriaSource.hpp"
#include <cstddef>
#include <iostream>
#include <ostream>

MateriaSource::MateriaSource()
{
    int i = 0;
    while (i < 4)
    {
        _inventory[i] = NULL;
        i++;
    }
    //std::cout << "Default constructor called for MateriaSource: " << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
    //std::cout << "Destructor called for MateriaSource: " << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
    //std::cout << "Copy constructor called for MateriaSource: "<< std::endl;
}
MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete _inventory[i];
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
        //std::cout << "Copy assignment operator called for MateriaSource" << std::endl;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;

    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m->clone();  // 7tina hna copy
            delete m;
            std::cout << "Learned materia: " << _inventory[i]->getType() << std::endl;
            return;
        }
    }

    //std::cout << "MateriaSource inventory full, cannot learn more." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] && _inventory[i]->getType() == type)
        {
            return _inventory[i]->clone();  // return copy
        }
    }
    return NULL; // type not found
}
