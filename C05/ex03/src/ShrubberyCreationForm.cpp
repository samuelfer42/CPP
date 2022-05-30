/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 03:53:01 by safernan          #+#    #+#             */
/*   Updated: 2022/05/30 05:08:10 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "fstream"

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	file;
	std::string		filename;

	this->canExecute(executor);
	filename = this->_target + "_shrubbery";
	file.open(filename.c_str());
	if (file.fail())
	{
		std::cout << "Error on open file" << std::endl;
		return ;
	}

	file << "         _-_			" << std::endl;
	file << "      /~~   ~~\\		" << std::endl;
	file << "   /~~         ~~\\	" << std::endl;
	file << "  {               }	" << std::endl;
	file << "   \\  _-     -_  /	" << std::endl;
	file << "    ~   \\\\ //  ~		" << std::endl;
	file << "         | |     		" << std::endl;
	file << "         | |     		" << std::endl;
	file << "        // \\\\ 		" << std::endl;

	file << "This three was planted by " << executor.getName() << std::endl;
	file.close();
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
	Form("ShrubberyCreationForm", 145, 137), _target(target) 
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & cpy) :
	Form("ShrubberyCreationForm", 145, 137), _target(cpy._target) 
{
	std::cout << "ShrubberyCreationForm Copy constructor called"<< std::endl;
	*this = cpy;
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(void)rhs;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called "<< std::endl;
	return ;
}
