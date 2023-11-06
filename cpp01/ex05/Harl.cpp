#include "Harl.hpp"

Harl::Harl() {
	std::cout << "a wild Harl appeared and wants to complain" << std::endl;
	return ;
}

Harl::~Harl() {
	std::cout << "Harl left the chat" << std::endl;
	return ;
}

void	Harl::_debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::_info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::_warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::_error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level) {
	std::string	levels[] = {"debug", "info", "warning", "error"};
	void	(Harl::*ComplainPtr[])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	size_t	index = 0;
	while (index < levels->size()) {
		if (level == levels[index]) {
			(this->*ComplainPtr[index])();
			break;
		}
		index++;
	}
	return ;
}
