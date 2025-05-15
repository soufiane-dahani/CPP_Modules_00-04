#include "Zombie.hpp"
#include <iostream>
#include <ostream>

Zombie::Zombie(std::string name)
{
    _name = name ;
}
Zombie::~Zombie()
{
    std::cout << _name << " is destroyed."<< std::endl ;
}

Zombie::Zombie()
{
    _name = "Unknow name ";
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name)
{
    _name = name;
}
