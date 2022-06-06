/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 05:10:56 by safernan          #+#    #+#             */
/*   Updated: 2022/06/06 07:58:04 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int		main()
{
	std::vector<int>cont_tab(4);
	std::vector<int>::iterator itr;
	std::vector<int>::iterator it;
	
	cont_tab[0] = 22;
	cont_tab[1] = 18;
	cont_tab[2] = 7;
	cont_tab[3] = 8;
	int 	find = 8;


	std::cout << "Container = { ";
	for(it = cont_tab.begin(); it!=cont_tab.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << "}" << std::endl;

	try
	{
		itr = easyfind(cont_tab, find);
		std::cout << "Find ok -> " << (*itr) << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
