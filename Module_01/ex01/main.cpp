#include "Zombie.hpp"
int main ()
{
    Zombie *Ob1;
    int N = 10;
    int i = 0;
    Ob1 = zombieHorde(N, "zombieHorde");
    while (i < N)
    {
        Ob1[i].announce();
        i++;
    }
    delete[] Ob1;
}