/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 00:46:57 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 02:34:21 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "../includes/Contact.hpp"

void	setgetline(std::string &input, bool p);

class PhoneBook
{
	public:
		int			c_index;
		int			nb_contact;

		void 		add();
		void 		search();
		void		display();
		std::string	cut(std::string word);

	private:
		Contact		contact[8];
	
};



#endif