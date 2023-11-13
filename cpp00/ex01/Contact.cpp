#include "Contact.hpp"

Contact::Contact(void) : index(0) {
    //constructor;
}

Contact::~Contact(void) {
    //destructor;
}

int     Contact::getIndex(void) const {
    return index;
}

std::string Contact::getFName(int maxSize) const {
    if (maxSize == 10 && _fname.size() >= 10)
        return _fname.substr(0, 9) + ".";
    return _fname;
}

std::string Contact::getLName(int maxSize) const {
    if (maxSize == 10 && _lname.size() >= 10)
        return _lname.substr(0, 9) + ".";
    return _lname;
}

std::string Contact::getNName(int maxSize) const {
    if (maxSize == 10 && _nname.size() >= 10)
        return _nname.substr(0, 9) + ".";
    return _nname;
}

std::string Contact::getPhone(void) const {
    return _phone;
}

std::string Contact::getSecret(void) const {
    return _secret;
}

void    Contact::setFName(std::string info) {
    _fname = info;
}

void    Contact::setLName(std::string info) {
    _lname = info;
}

void    Contact::setNName(std::string info) {
    _nname = info;
}

void    Contact::setPhone(std::string info) {
    _phone = info;
}

void    Contact::setSecret(std::string info) {
    _secret = info;
}

void    Contact::printInfo(void) const {
    std::cout << "_____________________________________" << std::endl << std::endl;
    std::cout << "first name:   " << getFName(0) << std::endl;
    std::cout << "last name:    " << getLName(0) << std::endl;
    std::cout << "nickname:     " << getNName(0) << std::endl;
    std::cout << "phone number: " << getPhone() << std::endl;
    std::cout << "secret:       " << getSecret() << std::endl;
}