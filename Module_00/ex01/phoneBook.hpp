#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        int contactCount;
        int nextIndex;

    public:
        PhoneBook();             
        bool addContact(); 
        bool searchContacts() const;
};

#endif