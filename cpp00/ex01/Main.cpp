#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
    std::string cmd;
    PhoneBook   PhoneBook;

    while (cmd.compare("EXIT") != 0) {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "this is a PhoneBook, please write a command" << std::endl;
        std::cout << "would you like to ADD, SEARCH or EXIT ? " << std::endl;
        std::cout << "________________________________________" << std::endl << std::endl;
        std::cin >> cmd;
        if (cmd.compare("ADD") == 0)
            PhoneBook.add();
        else if (cmd.compare("SEARCH") == 0)
            PhoneBook.search();
        std::cout << std::endl;
    }
    std::cout << "bye !" << std::endl;
    return (0);
}