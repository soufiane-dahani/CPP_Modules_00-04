#pragma once
#include <string>
class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const std::string &ideas);
        Brain(const Brain &other);
        Brain& operator=(const Brain &other);
        ~Brain();
};