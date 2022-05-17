/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:46:56 by safernan          #+#    #+#             */
/*   Updated: 2022/05/18 00:15:52 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

void	FragTrap::highFivesGuyes(void) const
{
	std::cout << this->_name << ": High Fives !" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap & cpy)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	this->_name = cpy._name;
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_dammage = 30;
	*this = cpy;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	(void)rhs;
	std::cout << "Assignation FragTrap constructor called" << std::endl;
	return *this;
}

FragTrap::~FragTrap(void)
{
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_dammage = 30;
	std::cout << "FragTrap destructor called" << std::endl; 
	return ;
}

void	FragTrap::attack(const std::string & target)
{
	if (!this->_energy_point)
		std::cout << this->_name << ": Don't have enough energy point !" << std::endl;
	else if (!this->_hit_point)
		std::cout << this->_name << ": need to be repaired !" << std::endl;
	else
	{
		this->_energy_point--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing "
				<< this->_attack_dammage << " points of damage !" << std::endl;
	}
	return ;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
	this->_name = name;
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_dammage = 30;
	return ;
}
