/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 00:34:02 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 02:15:56 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <string>
#include <iomanip>

class Contact 
{
	public:
		void	set_first_name(std::string first_name);
		void	set_last_name(std::string last_name);
		void	set_nickname(std::string nickname);
		void	set_phone_number(std::string phone_number);
		void	set_darkest(std::string darkest);
		void	show();
		
		std::string get_first_name( void ) const;
		std::string get_last_name( void ) const;
		std::string get_nickname( void ) const;
		std::string get_phone_number( void ) const;
		std::string get_darkest( void ) const;
		
		
	private:
	
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest;	
};

#endif