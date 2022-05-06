/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:03:43 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 10:15:09 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	int i = 0;
	Zombie* hordes = new Zombie[n];

	while (i < n)
	{
		hordes[i].SetName(name);
		i++;
	}
	return (hordes);
}