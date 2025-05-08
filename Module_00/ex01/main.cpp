#include <iostream>
#include "phoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string command;
    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            phoneBook.addContact();
        }
        else if (command == "SEARCH")
        {
            phoneBook.searchContacts();
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting program...\n";
            break;
        }
        else
        {
            std::cout << "Invalid command! Please enter ADD, SEARCH, or EXIT.\n";
        }
    }

    return 0;
}
