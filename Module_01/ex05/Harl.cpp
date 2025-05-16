#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

void Harl::debug() {
    std::cout << "[ DEBUG ]\nI love having extra bacon on my burger.\n" << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ]\nAdding extra bacon costs more money.\n" << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]\nI think I deserve some extra bacon for free.\n" << std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager.\n" << std::endl;
}

void Harl::complain(std::string level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Harl::*functions[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
