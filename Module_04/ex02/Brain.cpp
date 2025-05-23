#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    int i = 0;
    while (i < 100)
    {
        _ideas[i] = "Default";
        i++;
    }
    std::cout << "Default constructor called for Brain"<< std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor called for Brain"<< std::endl;
}

Brain::Brain(const std::string &ideas)
{
    for (int i = 0; i < 100; ++i) {
        _ideas[i] = ideas;
    }
    std::cout << "Parameterized constructor called for Brain"<< std::endl;
}

Brain::Brain(const Brain &other)
{
    int i = 0;
    while (i < 100)
    {
        _ideas[i] = other._ideas[i];
        i++;
    }
    std::cout << "Copy constructor called for Brain"<< std::endl;
}
Brain& Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        std::cout << "Copy assignment operator called for Brain" << std::endl;
        int i = 0;
        while (i < 100)
        {
            _ideas[i] = other._ideas[i];
            i++; 
        }
    }
    return *this;
}