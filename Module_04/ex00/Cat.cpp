#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default constructor called for Cat: " << _type << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Parameterized constructor called for Cat: " << _type << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Copy constructor called for Cat: " << _type << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Copy assignment operator called for Cat" << std::endl;
    Animal::operator=(other);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destructor called for Cat: " << _type << std::endl;
}

void Cat::makeSound() const
{
    std::cout << _type << " says: Meow!" << std::endl;
}
