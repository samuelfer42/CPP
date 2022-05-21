/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:13:10 by safernan          #+#    #+#             */
/*   Updated: 2022/05/18 03:20:09 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

std::string A_Animal::getType(void) const
{
	return (this->type);
}

A_Animal::~A_Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}
