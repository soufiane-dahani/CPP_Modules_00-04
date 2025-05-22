#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
    std::cout << "Default constructor called for Dog: " << _type << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Parameterized constructor called for Dog: " << _type << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Copy constructor called for Dog: " << _type << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Copy assignment operator called for Dog" << std::endl;
    Animal::operator=(other);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destructor called for Dog: " << _type << std::endl;
}

void Dog::makeSound() const
{
    std::cout << _type << " says: Woof!" << std::endl;
}