#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _maxContact(8), _index(0) {
    //phonebook constructor
}

PhoneBook::~PhoneBook() {
    //phonebook destructor;
}

void    PhoneBook::add() {
    std::string info;

    std::cout << "enter contact first name:" << std::endl;
    std::cin >> info;
    _Contact[_index].setFName(info);
    std::cout << "enter contact last name:" << std::endl;
    std::cin >> info;
    _Contact[_index].setLName(info);
    std::cout << "enter contact nickname:" << std::endl;
    std::cin >> info;
    _Contact[_index].setNName(info);
    std::cout << "enter contact phone number:" << std::endl;
    std::cin >> info;
    while (!check_number(info)) {
        std::cout << "error: phone number is not valid" << std::endl;
        std::cout << "enter valid phone number:" << std::endl;
        std::cin >> info;
    }
    _Contact[_index].setPhone(info);
    std::cout << "enter contact darkest secret" << std::endl;
    std::cin >> info;
    _Contact[_index].setSecret(info);
    std::cout << "contact successfully added to the PhoneBook" << std::endl;
    _Contact[_index].index = _index + 1;
    _index++;
    if (_index == _maxContact)
        _index = 0;
}

void   PhoneBook::printBook(void) {
    int i = 0;
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
    while (_Contact[i].getIndex() != 0 && i < 8) {
        std::cout << "|";
        std::cout.width(10);
        std::cout << _Contact[i].getIndex() << "|";
        std::cout.width(10);
        std::cout << _Contact[i].getFName(10) << "|";
        std::cout.width(10);
        std::cout << _Contact[i].getLName(10) << "|";
        std::cout.width(10);
        std::cout << _Contact[i].getNName(10) << "|" << std::endl;
        i++;
    }
    std::cout << " ------------------------------------------- " << std::endl;
}

void    PhoneBook::search() {
    std::string info;
    int i = 0;

    if (_Contact[0].getIndex() == 0) {
        std::cout << "no contact found in PhoneBook" << std::endl;
        return ;
    }
    printBook();
    std::cout << "which contact would you like to see ?" << std::endl;
    while (i > _maxContact || i <= 0) {
        std::cin >> info;
        try {
            i = std::stoi(info);
        }
        catch (std::invalid_argument) {
            i = 0;
        }
        if (i > _maxContact || i <= 0) {
            std::cout << "pick an index between 1 and 8" << std::endl;
            i = 0;
        }
        if (_Contact[i - 1].getIndex() > 0 && _Contact[i - 1].getIndex() < 9) {
            std::cout << "here's contact info for index number " << i << std::endl;
            _Contact[i - 1].printInfo();
        }
    }
}

bool    check_number(std::string info) {
    int i = 0;
    while (info[i]) {
        if (!isdigit(info[i]))
            return false;
        i++;
    }
    return true;
}