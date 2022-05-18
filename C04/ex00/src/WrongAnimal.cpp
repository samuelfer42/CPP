/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:39:59 by safernan          #+#    #+#             */
/*   Updated: 2022/05/18 03:47:38 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

std::string WrongAnimal::getType(void) const
{
	return this->type;
} 

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal I cant make a sound " << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "No type";
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal & cpy)
{
	std::cout << "WrongAnimal Copy constructor called"<< std::endl;
	*this = cpy;
	this->type = cpy.getType();
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	(void)rhs;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called "<< std::endl;
	return ;
}
