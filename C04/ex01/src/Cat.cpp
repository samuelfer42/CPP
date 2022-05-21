/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:24:02 by safernan          #+#    #+#             */
/*   Updated: 2022/05/20 03:22:15 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Brain* Cat::getBrain(void)
{
	return this->brain;
}

Cat::Cat(void) : brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(Cat & cpy)
{
	std::cout << "Cat Copy constructor called"<< std::endl;
	this->type = "Cat";
	this->brain = new Brain(*cpy.getBrain());
	*this = cpy;
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	(void)rhs;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called "<< std::endl;
	delete this->brain;
	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou" << std::endl;
	return ;
}