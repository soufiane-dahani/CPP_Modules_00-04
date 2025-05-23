#pragma once
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    private:
        Brain* _brain;
    public:
        Dog();
        Dog(const std::string &type, const Brain &brain);
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog();
        void makeSound() const;
};