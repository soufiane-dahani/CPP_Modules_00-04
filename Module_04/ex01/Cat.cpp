#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
    _brain = new Brain();
    std::cout << "Default constructor called for Cat: " << _type << std::endl;
}

Cat::Cat(const std::string& type, const Brain& brain) : Animal(type)
{
    _brain = new Brain(brain);
    std::cout << "Parameterized constructor called for Cat: " << _type << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    _brain = new Brain (*other._brain);
    std::cout << "Copy constructor called for Cat: " << _type << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Copy assignment operator called for Cat" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        if (_brain)
            delete _brain;
        _brain = new Brain (*other._brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Destructor called for Cat: " << _type << std::endl;
}

void Cat::makeSound() const
{
    std::cout << _type << " says: Meow!" << std::endl;
}
