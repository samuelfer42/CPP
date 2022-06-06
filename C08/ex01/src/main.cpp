/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 06:42:08 by safernan          #+#    #+#             */
/*   Updated: 2022/06/06 07:58:00 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span		to_number(Span sp, unsigned int nb)
{
	srand(time(NULL));
	for (unsigned int i = 0 ; i < nb; i++)
		sp.addNumber(rand() % 100);
	
	return (sp);
}

int		main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "=====" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "=====" << std::endl;

	
	Span sp2 = Span(15000);
	try
	{
		sp2 = to_number(sp2, 15000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "=====" << std::endl;
	try 
	{
			std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
			std::cout << "Longest  span: " << sp2.longestSpan() << std::endl;
	} 
	catch (std::exception const &e) 
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
		std::cout << "=====" << std::endl;
}
