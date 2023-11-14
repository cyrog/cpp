#include <iostream>
#include <string>

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    Contact     _Contact[8];
    const int   _maxContact;
    int         _index;
public:
    PhoneBook();
    ~PhoneBook();
    void    add();
    void    printBook();
    void    search();
};

bool    check_number(std::string info);
bool    check_name(std::string info);

#endif