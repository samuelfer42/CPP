/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 04:58:19 by safernan          #+#    #+#             */
/*   Updated: 2022/05/27 21:38:50 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(std::string const & name, int const & gradeToSign, int const & gradeToExec)
	: _name(name), _grade_to_sign(gradeToSign), _grade_to_exec(gradeToExec)
{
	this->_signed = false;
	std::cout << "Form default constructor called" << std::endl;
	if (this->_grade_to_exec > 150 || this->_grade_to_sign > 150)
		throw Form::GradeTooLowException();
	if (this->_grade_to_exec < 1 || this->_grade_to_sign > 150)
		throw Form::GradeTooHighException();
	return ;
}

Form::Form(Form & cpy) : _name(cpy.getName()), _grade_to_sign(cpy.getGradeToSign()),
				_grade_to_exec(cpy.getGradeToExec())
{
	this->_signed = cpy.isSigned();
	std::cout << "Form Copy constructor called"<< std::endl;
	*this = cpy;
	return ;
}

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	int grade = bureaucrat.getGrade();
	int	gradetosign = this->getGradeToSign();

	if (grade > gradetosign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

Form & Form::operator=(Form const & rhs)
{
	(void) rhs;
	return *this;
}

Form::~Form(void)
{
	std::cout << "Form destructor called "<< std::endl;
	return ;
}

bool Form::isSigned(void) const
{
	return this->_signed;
}

int	Form::getGradeToExec(void) const
{
	return this->_grade_to_exec;
}

int	Form::getGradeToSign(void) const
{
	return this->_grade_to_sign;
}

const std::string	&Form::getName(void) const
{
	return (this->_name);
}

std::ostream & operator<<(std::ostream &ostr, const Form & instance)
{
	ostr << "Form: " << instance.getName() << ", Grade to sign: " << instance.getGradeToSign()
		<< ", Grade to execute: " << instance.getGradeToExec() << ", Signed: "
		<< (instance.isSigned() ? "Yes" : "No") << std::endl;
	return ostr;
}
