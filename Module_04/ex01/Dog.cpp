#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
    _brain = new Brain;
    std::cout << "Default constructor called for Dog: " << _type << std::endl;
}

Dog::Dog(const std::string &type, const Brain &brain) : Animal(type)
{
    _brain = new Brain (brain);
    std::cout << "Parameterized constructor called for Dog: " << _type << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    _brain = new Brain (*other._brain);
    std::cout << "Copy constructor called for Dog: " << _type << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Copy assignment operator called for Dog" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        if (_brain)
            delete _brain;
        _brain = new Brain (*other._brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Destructor called for Dog: " << _type << std::endl;
}

void Dog::makeSound() const
{
    std::cout << _type << " says: Woof!" << std::endl;
}