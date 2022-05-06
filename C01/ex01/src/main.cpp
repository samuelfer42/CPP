/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:40:03 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 10:11:34 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int		main(void)
{
	int		nb;
	
	std::cout << "Number of Zombie :";
	std::cin >> nb;
	
	Zombie *hordes = zombieHorde(nb, "Benda");
	for (int i = 0; i < nb; i++)
		hordes[i].announce();
	delete [] hordes;
	return (0);
}

