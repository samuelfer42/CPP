/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:05:29 by safernan          #+#    #+#             */
/*   Updated: 2022/05/30 05:39:08 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Bureaucrat president("Test", 1);
	
	Intern someRandomIntern;
	Form *rff;

	std::cout << "-------------------------------" << std::endl;
	try
	{
		rff = someRandomIntern.makeForm("shrubbery creation", "test");
		president.signForm(*rff);
		president.executeForm(*rff);
		std::cout << *rff;
		delete rff;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}	
	std::cout << "------------------------------" << std::endl;
	return (0);
}