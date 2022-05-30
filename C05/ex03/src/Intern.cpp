/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 05:14:19 by safernan          #+#    #+#             */
/*   Updated: 2022/05/30 05:31:45 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Intern.hpp"

Form *newPresidentialPardonForm(std::string  const &target)
{
	return (new PresidentialPardonForm(target));
}

Form *newRobotomyRequestForm(std::string  const &target)
{
	return (new RobotomyRequestForm(target));
}

Form *newShrubberyCreationForm(std::string  const &target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
	return ;
}

Intern::Intern(Intern & cpy)
{
	std::cout << "Intern Copy constructor called"<< std::endl;
	*this = cpy;
	return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called "<< std::endl;
	return ;
}

Form *return_shrub(std::string target){ 
	return new ShrubberyCreationForm(target);
}

Form *return_robot(std::string target){ 
	return new RobotomyRequestForm(target);
}

Form *return_pres(std::string target){ 
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string const name, std::string const target)
{
		Form* (*f[3])(std::string);
	f[0] = return_shrub;
	f[1] = return_robot;
	f[2] = return_pres;
	std::string name_arr[3];
	name_arr[0] = "shrubbery creation";
	name_arr[1] = "robotomy request";
	name_arr[2] = "presidential pardon";
	int i = 0;
	while (i < 3){
		if (name == name_arr[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0 :
			std::cout << "Intern creates " << name << std::endl;
			return (f[0](target));
			break ;
		case 1 :
			std::cout << "Intern creates " << name << std::endl;
			return (f[1](target));
			break ;
		case 2 :
			std::cout << "Intern creates " << name << std::endl;
			return (f[2](target));
			break ;
		default :
			std::cout << "No form named : " << name << std::endl;
	}
	return (NULL);

}