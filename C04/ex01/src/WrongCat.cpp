/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:44:44 by safernan          #+#    #+#             */
/*   Updated: 2022/05/18 03:45:06 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

void WrongCat::makeSound (void) const
{
	std::cout << "Miaaaaaaaaaouh" << std::endl;
	return ;
}

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat & cpy)
{
	std::cout << "WrongCat Copy constructor called"<< std::endl;
	*this = cpy;
	this->type = "WrongCat";
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->type = rhs.getType();
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called "<< std::endl;
	return ;
}
