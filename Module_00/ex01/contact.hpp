#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact
{
    private :
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    public :
        Contact();
        void setContact();
        void displaySummary(int index) const;
        void displayFull() const;
};

#endif