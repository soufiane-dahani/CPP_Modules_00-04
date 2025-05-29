#include <iostream>
#include <string>
#include <fstream>
int main (int ac , char **av)
{
    
    if (ac != 4)
        return 1;
    std::string line;
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::fstream file(av[1]);
     if (!file) {
        std::cerr << "Could not open input file.\n";
        return 1;
    }
    std::string hello;
    hello = av[1];
    hello += ".replace";
    std::ofstream outFile(hello.c_str());
    if (!outFile) {
        std::cerr << "Could not open output file.\n";
        return 1;
    }
   while (std::getline(file, line)) {
    std::string newLine;
    std::size_t start = 0;
    std::size_t pos;

    while ((pos = line.find(s1, start)) != std::string::npos) {
        newLine += line.substr(start, pos - start);
        newLine += s2;                              
        start = pos + s1.length();
    }
    newLine += line.substr(start);
    outFile << newLine << std::endl;
}

    return 0;
}
