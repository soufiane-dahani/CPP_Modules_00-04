#include "contact.hpp"
#include <iostream>
#include <limits>
#include <string>

Contact::Contact() : firstName("unknown firstName"), lastName("unknown lastName"), nickname("unknown nickname"), phoneNumber("unknown phoneNumber"), darkestSecret("unknown darkestSecret") {};
void Contact::setContact()
{
    std::cout << "Enter First Name : ";
    std::getline(std::cin, firstName);
    while (firstName.empty()) {
        std::cout << "Enter again: ";
        std::getline(std::cin, firstName);
    }

    std::cout << "Enter last Name : ";
    std::getline(std::cin, lastName);
    while (lastName.empty()) {
        std::cout << "Enter again: ";
        std::getline(std::cin, lastName);
    }

    std::cout << "Enter nickname : ";
    std::getline(std::cin, nickname);
    while (nickname.empty()) {
        std::cout << "Enter again: ";
        std::getline(std::cin, nickname);
    }

    std::cout << "Enter phone Number : ";
    std::getline(std::cin, phoneNumber);
    while (phoneNumber.empty()) {
        std::cout << "Enter again: ";
        std::getline(std::cin, phoneNumber);
    }

    std::cout << "Enter darkest Secret : ";
    std::getline(std::cin, darkestSecret);
    while (darkestSecret.empty()) {
        std::cout << "Enter again: ";
        std::getline(std::cin, darkestSecret);
    }
}

void Contact::displaySummary(int index) const
{
    std::cout.width(10);
    std::cout.fill(' ');
    std::cout << index << "|";
    std::cout.width(10);
    std::cout.fill(' ');
    std::cout << firstName << "|";
    std::cout.width(10);
    std::cout.fill(' ');
    std::cout << lastName << "|";
    std::cout.width(10);
    std::cout.fill(' ');
    std::cout << nickname << std::endl;
}

void Contact::displayFull() const
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
