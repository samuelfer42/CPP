/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:54:08 by safernan          #+#    #+#             */
/*   Updated: 2022/05/18 00:16:56 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

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
	
	{
		FragTrap frag("Michel");
		
		frag.attack("Julie");
		frag.beRepaired(10);
		frag.highFivesGuyes();
	}
	return (0);
}