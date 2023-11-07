/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:08:47 by cgross            #+#    #+#             */
/*   Updated: 2023/10/10 12:29:54 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
 
class PhoneBook
{
   public:
      PhoneBook();
      ~PhoneBook();
	  void	add();
	  void	printbook();
	  void	search();
   private:
	  const int	_maxContact;
	  int		_index;
	  Contact	_Contact[8];
};

#endif // PHONEBOOK_H

