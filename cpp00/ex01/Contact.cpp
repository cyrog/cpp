/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:17:05 by cgross            #+#    #+#             */
/*   Updated: 2023/10/10 12:46:26 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
 
Contact::Contact(void) : index(0)
{
//constructor 
}
 
 
Contact::~Contact(void)
{
//destructor 
}

std::string	Contact::getFName(int maxSize) const
{
	if (maxSize == 10 && _FName.size() >= 10)
		return _FName.substr(0, 9) + ".";
	return _FName;
}

std::string	Contact::getLName(int maxSize) const
{
	if (maxSize == 10 && _LName.size() > 10)
		return _LName.substr(0, 9) + ".";
	return _FName;
}

std::string	Contact::getNName(int maxSize) const
{
	if (maxSize == 10 && _NName.size() > 10)
		return _NName.substr(0, 9) + ".";
	return _NName;
}

std::string Contact::getPhone(void) const
{
	return _Phone;
}

std::string Contact::getSecret(void) const
{
	return _Secret;
}

void	Contact::setFName(std::string info)
{
	_FName = info;
}

void	Contact::setLName(std::string info)
{
	_LName = info;
}

void	Contact::setNName(std::string info)
{
	_NName = info;
}

void	Contact::setPhone(std::string info)
{
	_Phone = info;
}


void	Contact::setSecret(std::string info)
{
	_Secret = info;
}

int		Contact::getIndex(void) const
{
	return index;
}

void	Contact::printInfo(void) const
{
	std::cout << getFName(0) << std::endl;
	std::cout << getLName(0) << std::endl;
	std::cout << getNName(0) << std::endl;
	std::cout << getPhone() << std::endl;
	std::cout << getSecret() << std::endl;
}
