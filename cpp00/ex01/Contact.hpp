/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:16:24 by cgross            #+#    #+#             */
/*   Updated: 2023/10/10 12:12:40 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

#ifndef CONTACT_H
#define CONTACT_H

class PhoneBook;
 
class Contact
{
   public:
      Contact(void);
      ~Contact(void);
		int			index;
		std::string	getFName(int maxSize) const;
		std::string	getLName(int maxSize) const;
		std::string	getNName(int maxSize) const;
		std::string getPhone(void) const;
		std::string getSecret(void) const;
		int			getIndex(void) const;
		void	setFName(std::string info);
		void	setLName(std::string info);
		void	setNName(std::string info);
		void	setPhone(std::string info);
		void	setSecret(std::string info);
		void	printInfo(void) const;

   private:
	  std::string	_FName;
	  std::string	_LName;
	  std::string	_NName;
	  std::string	_Phone;
	  std::string	_Secret;
};
#endif // CONTACT_H
