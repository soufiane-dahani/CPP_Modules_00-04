#include "Cure.hpp"
#include <string>

Cure::Cure() : AMateria("Cure")
{
    std::cout << "Default constructor called for Cure: " << _type << std::endl;
}

Cure::~Cure()
{
    std::cout << "Destructor called for Cure: " << _type << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    std::cout << "copy constructor called for Cure: " << _type << std::endl;
}

Cure& Cure::operator=(const Cure &other)
{
    AMateria::operator=(other);
    std::cout << "copy assignment called for Cure: " << _type << std::endl;
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}