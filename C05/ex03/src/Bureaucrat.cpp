/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 01:25:04 by safernan          #+#    #+#             */
/*   Updated: 2022/05/30 04:58:06 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

void	Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << form.getName()
		<< " because " << e.what() << "." << std::endl;
	}
	return ;
	
}
void	Bureaucrat::executeForm(Form const & form) const
{
	try 
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName()
			<< " because " << e.what() << "." << std::endl;
	}
}

Bureaucrat::Bureaucrat(std::string const & name, int const & grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat & cpy)
{
	std::cout << "Bureaucrat Copy constructor called"<< std::endl;
	*this = cpy;
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();
	this->_name = rhs.getName();
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called "<< std::endl;
	return ;
}

std::ostream & operator<<(std::ostream &ostr, const Bureaucrat & instance)
{
	ostr << instance.getName() << ", bureaucrat grade " << instance.getGrade() << ". ";
	return ostr;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

const std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

void		Bureaucrat::promotion(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
	std::cout << "Bureaucrat " << this->_name << " was been promoted to grade " << this->_grade << std::endl;
	return ;
}

void		Bureaucrat::destitution(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	std::cout << "Bureaucrat " << this->_name << " was been demoted to grade " << this->_grade << std::endl;
	return ;
}