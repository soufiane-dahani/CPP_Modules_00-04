#include "Ice.hpp"
#include <string>
#include <iostream>

Ice::Ice() : AMateria("ice")
{
    std::cout << "Default constructor called for Ice: " << _type << std::endl;
}

Ice::~Ice()
{
    std::cout << "Destructor called for Ice: " << _type << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    std::cout << "copy constructor called for Ice: " << _type << std::endl;
}

Ice& Ice::operator=(const Ice &other)
{
    AMateria::operator=(other);
    std::cout << "copy assignment called for Ice: " << _type << std::endl;
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}