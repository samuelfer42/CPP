/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:54:08 by safernan          #+#    #+#             */
/*   Updated: 2022/05/17 23:13:30 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main (void)
{
	{
		ClapTrap claptrap("Michel");

		claptrap.attack("epee");
		claptrap.takeDamage(5);
		claptrap.attack("pistolet");
		claptrap.takeDamage(5);
		claptrap.attack("Soin");
		claptrap.beRepaired(10);
	}
	
	{
		ScavTrap scav("Mikael");
		
		scav.attack("Poignard");
		scav.guardGate();
	}
	return (0);
}