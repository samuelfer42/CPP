/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:40:03 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 10:02:43 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int		main(void)
{
	std::cout << "Creating local Zombie:" << std::endl;
	{
		Zombie local = Zombie("Benda");
		local.announce();
	}
	std::cout << std::endl;
	std::cout << "Creating over scop Zombie:" << std::endl;
	{
		Zombie *scop = newZombie("Bryce");
		scop->announce();
		delete(scop);

	}
	std::cout << std::endl;
	std::cout << "Creating random Zombie:" << std::endl;
	randomChump("ZombieRandom");
	return (0);
}


