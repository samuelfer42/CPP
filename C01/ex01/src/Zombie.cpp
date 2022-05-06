/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:31:48 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 10:18:49 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void Zombie::announce (void){
	std::cout << this->name << " : BraiiiiiiinnnzzzZ... " << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Zombie has created" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << this->name << " has deleted" << std::endl;
}

void Zombie::SetName(std::string name)
{
	this->name = name;
}

