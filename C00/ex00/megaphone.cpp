/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:45:28 by safernan          #+#    #+#             */
/*   Updated: 2022/05/04 23:54:20 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <string.h>

int		main(int argc, char **argv) {

	int i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	else 
	{
		while (argv[i])
		{
			int j = 0;
			while (argv[i][j])
			{
				argv[i][j] = toupper(argv[i][j]);
				j++;
			}
				std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
		return(0);
	}
}