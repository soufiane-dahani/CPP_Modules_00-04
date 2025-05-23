#pragma once
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(const std::string& type, const Brain& brain);
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        ~Cat();
        void makeSound() const;
};