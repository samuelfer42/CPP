/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:54:06 by safernan          #+#    #+#             */
/*   Updated: 2022/05/17 00:17:38 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_point(10), _energy_point(10), _attack_dammage(0) {
	
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap & cpy) : _name(cpy._name), _hit_point(10), _energy_point(10), _attack_dammage(0) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = cpy;
	return ;
}


ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{ 
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClassTrap destructor called "<< std::endl;
	return ;
}

