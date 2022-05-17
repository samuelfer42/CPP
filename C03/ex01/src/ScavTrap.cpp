/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:51:52 by safernan          #+#    #+#             */
/*   Updated: 2022/05/17 23:40:32 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	this->_name = name;
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_dammage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap & cpy)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	this->_name = cpy._name;
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_dammage = 20;
	*this = cpy;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	(void)rhs;
	std::cout << "Assignation ScavTrap constructor called " << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called "<< std::endl;
	return ;
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string & target)
{
	if (!this->_energy_point)
		std::cout << this->_name << ": Don't have enough energy point !" << std::endl;
	else if (!this->_hit_point)
		std::cout << this->_name << ": need to be repaired !" << std::endl;
	else
	{
		this->_energy_point--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
				<< this->_attack_dammage << " points of damage !" << std::endl;
	}
	return ;
}