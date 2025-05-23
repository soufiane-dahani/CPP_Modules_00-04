#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstdlib> 
PhoneBook::PhoneBook() : contactCount(0), nextIndex(0){};

bool PhoneBook::addContact()
{
    std::cout << "Adding a new contact...\n";
    if (!contact[nextIndex].setContact())
        return false;

    if (contactCount < 8)
        contactCount++;
    nextIndex = (nextIndex + 1) % 8;
    return true;
}

bool PhoneBook::searchContacts() const
{
    int index;
    std::string input;

    std::cout << "List of contacts:\n";
    std::cout << "Index     |First Name|Last Name |Nickname   \n";
    std::cout << "-------------------------------------------\n";

    for (int i = 0; i < contactCount; i++) {
        contact[i].displaySummary(i);
    }

    std::cout << "Enter the index of the contact you want to view: ";
    if (!getline(std::cin, input))
    {
        return false;
    }

    if (input.empty() || input.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cout << "Invalid input. Please enter a valid number.\n";
        return true;
    }
    index = std::atoi(input.c_str());

    if (index >= 0 && index < contactCount)
    {
        contact[index].displayFull();
    }
    else
    {
        std::cout << "Invalid index. Please enter a valid index.\n";
    }
    return true;
}

