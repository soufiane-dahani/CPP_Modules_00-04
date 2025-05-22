#pragma once
#include <string>
#include "Animal.hpp"
class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        ~Cat();
        void makeSound() const;
};