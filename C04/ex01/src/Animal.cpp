/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:13:10 by safernan          #+#    #+#             */
/*   Updated: 2022/05/18 03:20:09 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Brain* Animal::getBrain(void)
{
	return NULL;
}

Animal::Animal(Animal & cpy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = "type NULL";
	*this = cpy;
	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	(void)rhs;
	return *this;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal I can make sound" << std::endl;
}

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "type NULL";
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}
