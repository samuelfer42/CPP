/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 01:23:45 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 03:21:51 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void 	PhoneBook::add()
{
	std::string tmp;

	std::cout << "First name: ";
	setgetline(tmp, false);
	contact[c_index].set_first_name(tmp);
	
	std::cout << "Last name: ";
	setgetline(tmp, false);
	contact[c_index].set_last_name(tmp);

	std::cout << "Nickname: ";
	setgetline(tmp, false);
	contact[c_index].set_nickname(tmp);
	
	std::cout << "Phone Number: ";
	setgetline(tmp, false);
	contact[c_index].set_phone_number(tmp);

	std::cout << "Darkest Secret: ";
	setgetline(tmp, false);
	contact[c_index].set_darkest(tmp);
	
	std::cout << "Contact added to your PhoneBook" << std::endl;
	
	c_index++;
	if (c_index == 8)
		c_index = 0;
	if (nb_contact < 8)
		nb_contact++;
}


std::string	PhoneBook::cut(std::string word)
{
	if (word.length() > 9)
		return (word.substr(0, 9).append("."));
	return (word);
}


void 	PhoneBook::search()
{
	std::string tmp;
	int		id = 0;
	
	if (nb_contact == 0)
		std::cout << " No Contact registed" << std::endl;

	else
	{
		display();
		std::cout << std::endl << "Enter index contact: ";
		setgetline(tmp, false);
		id = std::atoi(tmp.c_str());

		while ((id < 0 || id > nb_contact) || !std::isdigit(id))
		{
			std::cout << "Index " << tmp << " doesn't exist !" << std::endl;
			setgetline(tmp, true);
			id = std::atoi(tmp.c_str());
		}
			contact[id-1].show();
	}
}

void	PhoneBook::display()
{
	int		i = 0;

	std::cout << "********************CONTACT********************" << std::endl;
	std::cout << "*|" << std::setfill(' ') << std::setw(10) << "INDEX" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "NICKNAME" << "|*" << std::endl;
	while (i < nb_contact)
	{
		std::cout << "*|" << std::setfill(' ') << std::setw(10) << i + 1 << "|";
		std::cout << std::setfill(' ') << std::setw(10) << cut(contact[i].get_first_name()) << "|";
		std::cout << std::setfill(' ') << std::setw(10) << cut(contact[i].get_last_name()) << "|";
		std::cout << std::setfill(' ') << std::setw(10) << cut(contact[i].get_nickname()) << "|*" << std::endl;
		i++;
	}
	std::cout << "***********************************************" << std::endl;
	
}
