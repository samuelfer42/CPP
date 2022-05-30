/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 03:48:48 by safernan          #+#    #+#             */
/*   Updated: 2022/05/30 04:55:23 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/PresidentialPardonForm.hpp"
#include "fstream"

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->canExecute(executor);
	std::cout << "The President Zaphod Beeblebrox sending pardon to " << this->_target << ". " << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
	Form("PresidentialPardonForm", 25, 5), _target(target) 
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & cpy) :
	Form("PresidentialPardonForm", 25, 5), _target(cpy._target) 
{
	std::cout << "PresidentialPardonForm Copy constructor called"<< std::endl;
	*this = cpy;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(void)rhs;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called "<< std::endl;
	return ;
}
