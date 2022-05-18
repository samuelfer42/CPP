/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:24:05 by safernan          #+#    #+#             */
/*   Updated: 2022/05/18 03:30:29 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(Dog & cpy)
{
	std::cout << "Dog Copy constructor called"<< std::endl;
	this->type = "Dog";
	*this = cpy;
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	(void)rhs;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called "<< std::endl;
	return ;
}

void Dog::makeSound(void) const
{
	std::cout << "Ouaf Ouaf" << std::endl;
}