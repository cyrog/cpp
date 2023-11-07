/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:22:19 by cgross            #+#    #+#             */
/*   Updated: 2023/09/25 16:24:01 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int		main(int argc, char **argv)
{
	int	i = 0;
	int	j;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARBLE FEEDBACK NOISE *";
	else
	{
		while (++i < argc)
		{
			j = 0;
			while (argv[i][j])
				std::cout << (char)toupper(argv[i][j++]);
		}
	}
	std::cout << std::endl;
	return (0);
}
