/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 05:52:29 by safernan          #+#    #+#             */
/*   Updated: 2022/06/06 07:57:58 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(unsigned int const &n) : _size_max(n)
{
	std::cout << "Span default constructor called" << std::endl;
	return ;
}
std::vector<int>Span::getTab() const 
{ 
	return this->_vnb; 
}
void	Span::addNumber(const int &nb)
{
	if (this->_vnb.size() >= _size_max)
	{
		throw std::out_of_range("Out_of_range");
		return ;
	}
	this->_vnb.push_back(nb);
}

Span::Span(void) : _size_max(0)
{
	std::cout << "Span default constructor called" << std::endl;
	return ;
}

Span::Span(Span const & cpy)
{
	std::cout << "Span Copy constructor called"<< std::endl;
	*this = cpy;
	return ;
}

Span & Span::operator=(Span const & rhs)
{
	this->_size_max = rhs._size_max;
	this->_vnb = rhs._vnb;
	return *this;
}

Span::~Span(void)
{
	std::cout << "Span destructor called "<< std::endl;
	return ;
}

int Span::longestSpan(void) const
{
	std::vector<int>	tab(this->_vnb);
	if (tab.size() <= 1)
		throw std::logic_error("Not enough number");
	int		max = *std::max_element(tab.begin(), tab.end());
	int		min = *std::min_element(tab.begin(), tab.end());
	return (max - min);
}

int Span::shortestSpan(void) const
{
	std::vector<int>	tab(this->_vnb);
	if (tab.size() <= 1)
		throw std::logic_error("Not enough number");
	int min = 0;
	std::sort(tab.begin(), tab.end());

	for(unsigned int i = 0; i < tab.size(); i++)
	{
		if (std::abs(tab[i] - tab[i + 1]) < min || i == 0)
			min = std::abs(tab[i] - tab[i + 1]);
	}
	return	min;
}