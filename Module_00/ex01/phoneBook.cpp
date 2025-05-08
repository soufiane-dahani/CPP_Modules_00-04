#include "phoneBook.hpp"
#include "contact.hpp"
#include <iostream>
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


    std::cout << "List of contacts:\n";
    std::cout << "Index | First Name | Last Name | Nickname\n";
    std::cout << "-------------------------------------------\n";

    for (int i = 0; i < 8; i++) {
        contact[i].displaySummary(i);
    }


    std::cout << "Enter the index of the contact you want to view: ";
    std::cin >> index;

    if (index >= 0 && index < contactCount)
    {
        contact[index].displayFull();
    }
    else
    {
        std::cout << "Invalid index. Please enter a valid index.\n";
    }
}
