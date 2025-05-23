#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
    _type = "Default";
    std::cout << "Default constructor called for Animal: " << _type << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor called for Animal: " << _type << std::endl;
}

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << "Parameterized constructor called for Animal: " << type << std::endl;
}

Animal::Animal(const Animal &other) 
    : _type(other._type){
        std::cout << "Copy constructor called for Animal: " << _type << std::endl;
    }
Animal& Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        std::cout << "Copy assignment operator called for Animal" << std::endl;
        this->_type = other._type;
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << _type << " makes an indiscernible sound...\n";
}

std::string Animal::getType() const
{
    return _type;
}