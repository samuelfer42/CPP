/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 02:59:49 by safernan          #+#    #+#             */
/*   Updated: 2022/05/20 04:18:02 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int index = 0; index < 100; index ++)
		this->ideas[index] = "NULL";
	return ;
}

Brain::Brain(Brain & cpy)
{
	std::cout << "Brain Copy constructor called"<< std::endl;
	for (int index = 0; index < 100; index ++)
		this->ideas[index] = cpy.getIdeasIndex(index);
	*this = cpy;
	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	(void)rhs;
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called "<< std::endl;
	return ;
}

std::string Brain::getIdeasIndex(int const index) const
{
	if (index > 100 || index < 0)
		return (NULL);
	return (this->ideas[index]);
}

void	Brain::setIdeasIndex(std::string const & ideas, int const & index)
{
	if (index > 100 || index < 0)
	{
		std::cout << "not enough space in brain" << std::endl;
		return ;
	}
	this->ideas[index] = ideas;
}