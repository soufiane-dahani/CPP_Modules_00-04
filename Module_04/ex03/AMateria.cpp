#include "AMateria.hpp"

AMateria::AMateria()
{
    _type = "Default";
    //std::cout << "Default constructor called for AMateria: " << _type << std::endl;
}

AMateria::~AMateria()
{
    //std::cout << "Destructor called for AMateria: " << _type << std::endl;
}

AMateria::AMateria(std::string type)
{
    _type = type;
    //std::cout << "Parameterized constructor called for AMateria: " << type << std::endl;
}

AMateria::AMateria(const AMateria &other) 
    : _type(other._type){
        //std::cout << "Copy constructor called for AMateria: " << _type << std::endl;
    }
AMateria& AMateria::operator=(const AMateria &other)
{
    if (this != &other)
    {
        //std::cout << "Copy assignment operator called for AMateria" << std::endl;
        this->_type = other._type;
    }
    return *this;
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}