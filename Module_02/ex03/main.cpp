#include "Point.hpp"
#include <iostream>

int main( void )
{
    Point A(0, 0);
    Point B(4,0);
    Point C(0,3);
    Point D(1,1);
    if (bsp(A, B, C, D) == true)
        std::cout << "D inside" << std::endl;
    else
        std::cout << "D outside" << std::endl;
    return 0;
}