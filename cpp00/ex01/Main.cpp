/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:08:43 by cgross            #+#    #+#             */
/*   Updated: 2023/10/10 14:23:42 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	PhoneBook;

	while (cmd.compare("EXIT") != 0)
	{
		std::cout << "Welcome on your PhoneBook, please write one of below cmd:" << std::endl;
		std::cout << "Would you like to ADD, SEARCH OR EXIT ?" << std::endl;
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
			PhoneBook.add();
		else if (cmd.compare("SEARCH") == 0)
			PhoneBook.search();
		std::cout << std::endl;
	}
	std::cout << "Bye" << std::endl;
	return (0);
}
