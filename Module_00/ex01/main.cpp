#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string command;
    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
        {
            std::cout << "\nExiting program... (CTR + D)\n";
            break;
        }

        if (command == "ADD")
        {
            if (!phoneBook.addContact())
            {
                std::cout << "\nExiting program... (CTR + D)\n";
                break;
            }
        }
        else if (command == "SEARCH")
        {
            if (!phoneBook.searchContacts())
                        {
                std::cout << "\nExiting program... (CTR + D)\n";
                break;
            }
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
