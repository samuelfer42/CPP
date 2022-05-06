/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 00:33:59 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 02:15:50 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void Contact::set_first_name(std::string first_name) {
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name) {
	this->last_name = last_name;
}
	
void Contact::set_nickname(std::string nickname) {
	this->nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number) {
	this->phone_number = phone_number;
}

void Contact::set_darkest(std::string darkest) {
	this->darkest = darkest;
}

std::string Contact::get_first_name( void ) const {
	return this->first_name;
}

std::string Contact::get_last_name( void ) const {
	return this->last_name;
}

std::string Contact::get_nickname( void ) const {
	return this->nickname;
}

std::string Contact::get_phone_number( void ) const {
	return this->phone_number;
}

std::string Contact::get_darkest( void ) const {
	return this->darkest;
}

void	Contact::show()
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest << std::endl;
}