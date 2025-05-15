#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
     if (N <= 0)
        return NULL;
    Zombie *Ob1;
    int i = 0;
    Ob1 = new Zombie[N];
    while (i < N)
    {
        Ob1[i].setName(name);
        i++;
    }
    return Ob1;
}