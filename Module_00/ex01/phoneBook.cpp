#include "phoneBook.hpp"
#include "contact.hpp"
#include <iostream>
#include <limits>
#include <cstdlib> 
PhoneBook::PhoneBook() : contactCount(0), nextIndex(0){};

void PhoneBook::addContact()
{
    std::cout << "Adding a new contact...\n";
    contact[nextIndex].setContact();

    if (contactCount < 8)
        contactCount++;
    nextIndex = (nextIndex + 1) % 8;
}

void PhoneBook::searchContacts() const
{
    int index;
    std::string input;

    std::cout << "List of contacts:\n";
    std::cout << "Index | First Name | Last Name | Nickname\n";
    std::cout << "-------------------------------------------\n";

    for (int i = 0; i < contactCount; i++) {
        contact[i].displaySummary(i);
    }

    std::cout << "Enter the index of the contact you want to view: ";
    std::cin >> input ;

    if (input.empty() || input.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid number.\n";
        return;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    index = std::atoi(input.c_str());

    if (index >= 0 && index < contactCount)
    {
        contact[index].displayFull();
    }
    else
    {
        std::cout << "Invalid index. Please enter a valid index.\n";
    }
}

