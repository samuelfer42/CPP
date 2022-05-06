/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:31:48 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 10:19:42 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void Zombie::announce (void){
	std::cout << this->name << " : BraiiiiiiinnnzzzZ... " << std::endl;
}

Zombie::Zombie(std::string name) : name(name){
	std::cout << "Zombie " << this->name << " has created" << std::endl;
}

Zombie::~Zombie( void ){
	std::cout << "Zombie " << this->name << " has deleted" << std::endl;
}