/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:05:29 by safernan          #+#    #+#             */
/*   Updated: 2022/05/25 02:07:46 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat Benda("Benda", 145);
		for (int i = 0; i < 10; i++)
			Benda.destitution();
	}
	catch (std::exception & e)
		{ std::cout << "Error: " << e.what() << std::endl; }

	try
	{
		Bureaucrat Benda("Benda", 10);
		for (int i = 0; i < 10; i++)
			Benda.promotion();
	}
	catch (std::exception & e)
		{ std::cout << "Error: " << e.what() << std::endl; }

	try
	{
		Bureaucrat Benda("Benda", 300);
		std::cout << Benda << std::endl;
	}
	catch (std::exception & e)
		{ std::cout << "Error: " << e.what() << std::endl; }

	try
	{
		Bureaucrat Benda("Benda", 100);
		std::cout << Benda << std::endl;
	}
	catch (std::exception & e)
		{ std::cout << "Error: " << e.what() << std::endl; }


	return (0);
}