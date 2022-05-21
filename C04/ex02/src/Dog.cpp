/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:24:05 by safernan          #+#    #+#             */
/*   Updated: 2022/05/21 01:16:17 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Brain* Dog::getBrain(void) const
{
	return this->brain;
}

Dog::Dog(void) : brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(Dog & cpy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = cpy.getType();
	this->brain = new Brain(*cpy.getBrain());
	*this = cpy;
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.getType();
	*(this->brain) = (*rhs.getBrain());
	return *this;
}

A_Animal & Dog::operator=(A_Animal const & rhs)
{
	this->type = rhs.getType();
	*(this->brain) = (*rhs.getBrain());
	return *this;	
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called "<< std::endl;
	delete this->brain;
	return ;
}

void Dog::makeSound(void) const
{
	std::cout << "Ouaf Ouaf" << std::endl;
}