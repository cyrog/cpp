#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
    std::string cmd;
    PhoneBook   PhoneBook;

    while (cmd.compare("EXIT") != 0) {
        std::cout << "  ------------------------------------------ " << std::endl;
        std::cout << "           this is a dumb PhoneBook          " << std::endl;
        std::cout << "   would you like to ADD, SEARCH or EXIT ?   " << std::endl;
        std::cout << " ------------------------------------------- " << std::endl;
        std::cin >> cmd;
        if (cmd.compare("ADD") == 0)
            PhoneBook.add();
        else if (cmd.compare("SEARCH") == 0)
            PhoneBook.search();
        else
            if (cmd.compare("EXIT") != 0)
                std::cerr << "error: cmd not found" << std::endl;
    }
    std::cout << "bye !" << std::endl;
    return (0);
}