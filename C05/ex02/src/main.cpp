/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:05:29 by safernan          #+#    #+#             */
/*   Updated: 2022/05/30 05:09:57 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"


int main(void)
{
	try
	{
		Bureaucrat president("President", 1);
		Bureaucrat vp("Adjoint", 10);
		Bureaucrat minister("Ministre", 80);
		Bureaucrat mayer("Major", 145);

		ShrubberyCreationForm tree("Jardin");
		RobotomyRequestForm robot("Benda");
		PresidentialPardonForm pardon("Mikeal");
		
		std::cout << std::endl << "--------------------------" << std::endl;
		std::cout << tree << robot << pardon << std::endl;
		std::cout << "--------------------------" << std::endl;
			mayer.signForm(tree);
			mayer.executeForm(tree);
			minister.executeForm(tree);
		std::cout << std::endl << tree << std::endl;
		std::cout << "--------------------------" << std::endl;
			mayer.signForm(robot);
			minister.signForm(robot);
			vp.signForm(robot);
			minister.executeForm(robot);
			vp.executeForm(robot);
		std::cout << std::endl << robot << std::endl;
		std::cout << "--------------------------" << std::endl;
			mayer.signForm(pardon);
			minister.signForm(pardon);
			vp.signForm(pardon);
			president.signForm(pardon);
			minister.executeForm(pardon);
			vp.executeForm(pardon);
			president.executeForm(pardon);
		std::cout << std::endl << pardon << std::endl;
		std::cout << "--------------------------" << std::endl << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	return (0);
}