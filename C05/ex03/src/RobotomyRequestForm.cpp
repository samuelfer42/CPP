/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 03:48:50 by safernan          #+#    #+#             */
/*   Updated: 2022/05/30 04:54:20 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/RobotomyRequestForm.hpp"
#include "fstream"

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->canExecute(executor);
	std::srand(time(0));
	std::cout << "* BRZZZZZZZ-BRZZZZZZZ *" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " was Robotized" << std::endl;
	else
		std::cout << "Robotiziation of " << this->_target << " failed." << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
	Form("RobotomyRequestForm", 72, 45), _target(target) 
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & cpy) :
	Form("RobotomyRequestForm", 72, 45), _target(cpy._target) 
{
	std::cout << "RobotomyRequestForm Copy constructor called"<< std::endl;
	*this = cpy;
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(void)rhs;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called "<< std::endl;
	return ;
}
