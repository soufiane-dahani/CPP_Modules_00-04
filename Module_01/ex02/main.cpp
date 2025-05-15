#include <ostream>
#include <string>
#include <iostream>

int main ()
{
    std::string str;
    str = "HI THIS IS BRAIN";
    std::string *stringPTR;
    stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of str: " << &str << std::endl;
    std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Address held by stringREF: " << &stringREF << std::endl;

    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
    
    return 0;
}
