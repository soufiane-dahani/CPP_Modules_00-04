#include "Harl.hpp"
#include <iostream>
#include <string>

int main (int ac, char **av)
{
    Harl Ob1;
    if (ac != 2)
    {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }
    Ob1.complain(av[1]);
    return 0;
}