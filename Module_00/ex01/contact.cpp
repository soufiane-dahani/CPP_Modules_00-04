#include "contact.hpp"
#include <iostream>
#include <string>

Contact::Contact() : firstName("unknown firstName"), lastName("unknown lastName"), nickname("unknown nickname"), phoneNumber("unknown phoneNumber"), darkestSecret("unknown darkestSecret") {};
bool Contact::setContact()
{
    std::cout << "Enter First Name : ";
    if (!std::getline(std::cin, firstName))
    {
        return false;
    }
    while (firstName.empty()) {
        std::cout << "Enter again: ";
        if (!std::getline(std::cin, firstName))
        {

            return false;
        }
    }

    std::cout << "Enter last Name : ";
    if (!std::getline(std::cin, lastName))
    {
        return false;
    }
    while (lastName.empty()) {
        std::cout << "Enter again: ";
        if (!std::getline(std::cin, lastName))
        {

            return false;
        }
    }

    std::cout << "Enter nickname : ";
    if (!std::getline(std::cin, nickname))
    {
        return false;
    }
    while (nickname.empty()) {
        std::cout << "Enter again: ";
        if (!std::getline(std::cin, nickname))
        {

            return false;
        }
    }

    std::cout << "Enter phone Number : ";
    if (!std::getline(std::cin, phoneNumber))
    {
        return false;
    }
    while (phoneNumber.empty()) {
        std::cout << "Enter again: ";
        if (!std::getline(std::cin, phoneNumber))
        {

            return false;
        }
    }

    std::cout << "Enter darkest Secret : ";
    if (!std::getline(std::cin, darkestSecret))
    {
        return false;
    }
    while (darkestSecret.empty()) {
        std::cout << "Enter again: ";
        if (!std::getline(std::cin, darkestSecret))
        {

            return false;
        }
    }
    return true;
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
