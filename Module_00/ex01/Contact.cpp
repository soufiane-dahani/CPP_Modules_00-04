#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip> 

Contact::Contact() : firstName("unknown firstName"), lastName("unknown lastName"), nickname("unknown nickname"), phoneNumber("unknown phoneNumber"), darkestSecret("unknown darkestSecret") {};
bool Contact::setContact()
{
    std::cout << "Enter First Name : ";
    if (!std::getline(std::cin, firstName))
    {
        return false;
    }
    while (firstName.empty() || firstName.find_first_not_of("qwertyuiopasdfghjklzxcvbnm") != std::string::npos) {
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
    while (lastName.empty() || lastName.find_first_not_of("qwertyuiopasdfghjklzxcvbnm") != std::string::npos) {
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
    while (phoneNumber.empty() || phoneNumber.find_first_not_of("0123456789") != std::string::npos) {
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

std::string formatField(const std::string& field) {
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    else
        return std::string(10 - field.length(), ' ') + field;
}

void Contact::displaySummary(int index) const
{
    std::cout << std::setw(10) << index << "|";
    std::cout << formatField(firstName) << "|";
    std::cout << formatField(lastName) << "|";
    std::cout << formatField(nickname) << std::endl;
}

void Contact::displayFull() const
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
