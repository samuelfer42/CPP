/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:54:06 by safernan          #+#    #+#             */
/*   Updated: 2022/05/17 23:43:05 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_point(10), _energy_point(10), _attack_dammage(0) {
	
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(void)
{
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
	(void)rhs;
	std::cout << "ClapTrap assination constructor called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called "<< std::endl;
	return ;
}

void	ClapTrap::attack(const std::string & target)
{
	if (!this->_energy_point)
		std::cout << this->_name << "Don't have enough energy point !" << std::endl;
	else if (!this->_hit_point)
		std::cout << this->_name << " ClapTrap need to be repaired !" << std::endl;
	else
	{
		this->_energy_point--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
				<< this->_attack_dammage << " points of damage !" << std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_point -= this->_hit_point - amount >= 0 ? amount : 0;
	if (this->_hit_point < 1)
		std::cout << "ClapTrap " << this->_name << " need to be repaired !" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_energy_point)
		std::cout << this->_name << " Don't have enough energy point !" << std::endl;
	else
	{
		this->_energy_point--;
		this->_hit_point = amount;
		std::cout << "ClapTrap " << this->_name << " has been repaired !" << std::endl;
	}		
}