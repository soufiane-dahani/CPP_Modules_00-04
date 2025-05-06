#include <iostream>
#include <string>

int main(int argc, char **argv) {
    
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    for (int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        for (size_t j = 0; j < arg.length(); ++j) {
            std::cout << (char)std::toupper(arg[j]);
        }
        

    }
    std::cout << std::endl ;
    return 0;
}


