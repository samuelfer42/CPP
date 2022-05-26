/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:05:29 by safernan          #+#    #+#             */
/*   Updated: 2022/05/26 05:22:31 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

int main(void)
{
	try 
	{
		Bureaucrat michel("Michel", 150);
		Bureaucrat benoit("Benoit", 5);

		Form	form1("Form 1", 10, 5);
		Form	form2("Form 2", 20, 20);
	
		std::cout << std::endl;
		std::cout << form1 << std::endl << form2 << std::endl;

		michel.signForm(form1);
		benoit.signForm(form2);

		std::cout << std::endl << form1 << std::endl << form2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() <<  std::endl;
		return 1; 
	}
	return (0);
}