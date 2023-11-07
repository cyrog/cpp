/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:08:59 by cgross            #+#    #+#             */
/*   Updated: 2023/10/10 12:51:35 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
 
PhoneBook::PhoneBook() : _maxContact(8), _index(0)
{
//constructor 
}
 
 
PhoneBook::~PhoneBook()
{
//destructor 
}

void	PhoneBook::add()
{
	std::string	info;

	std::cout << "Enter contact first name" << std::endl;
	std::cin >> info;
	_Contact[_index].setFName(info);
	std::cout << "Enter contact last name" << std::endl;
	std::cin >>info;
	_Contact[_index].setLName(info);
	std::cout << "Enter contact nickname" << std::endl;
	std::cin >> info;
	_Contact[_index].setNName(info);
	std::cout << "Enter contact phone number" << std::endl;
	std::cin >> info;
	_Contact[_index].setPhone(info);
	std::cout << "Enter contact darkest secret " << std::endl;
	std::cin >> info;
	_Contact[_index].setSecret(info);
	std::cout << "Contact succesfully added to the PhoneBook" << std::endl;
	_Contact[_index].index = _index + 1;
	_index++;
	if (_index == _maxContact)
		_index = 0;
}

void	PhoneBook::printbook()
{
	int	i = 0;
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
//	std::cout << "|__________|__________|__________|__________|" << std::endl;
	while (_Contact[i].getIndex() != 0 && i < 8)
	{
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
//	std::cout << " ___________________________________________ " << std::endl;
}

void	PhoneBook::search()
{
	std::string	info;
	int			i = 0;

	if (_Contact[0].getIndex()  == 0)
	{
		std::cout << "No contact found in PhoneBook" << std::endl;
		return ;
	}
	printbook();
	std::cout << "Which contact would you like to see ?" << std::endl;
	while (i > _maxContact || i <= 0)
	{
		std::cin >> info;
		try
		{
			i = std::stoi(info);
		}
		catch (std::invalid_argument)
		{
			std::cout << "Pick an index between 1 and 8" << std::endl;
			i = 0;
		}
		if (i > _maxContact || i <= 0)
		{
			std::cout << "Pick an index between 1 and 8" << std::endl;
			i = 0;
		}
		if (_Contact[i - 1].getIndex() > 0 && _Contact[i - 1].getIndex() < 9)
			_Contact[i - 1].printInfo();
	}
}
