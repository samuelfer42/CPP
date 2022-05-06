/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 00:45:50 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 03:01:54 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void	setgetline(std::string &input, bool p)
{
	if(p)
		std::cout << ">";
	std::getline(std::cin, input);
	
	if (input.empty())
	{
		std::cout << "Empty line, please enter a value:" << std::endl;
		setgetline(input, true);
	}
}

int main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	phonebook.c_index = 0;
	phonebook.nb_contact = 0;

	std::cout << "Welcome to PhoneBook" << std::endl;
	std::cout << "use ADD, SEARCH, EXIT" << std::endl;
	while(input != "EXIT")
	{
		setgetline(input, true);
		if (input == "ADD")
			phonebook.add();
		if (input == "SEARCH")
			phonebook.search();
		else
		std::cout << "use ADD, SEARCH, EXIT" << std::endl;

	}
	return (0);
}