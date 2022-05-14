/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:38:20 by safernan          #+#    #+#             */
/*   Updated: 2022/05/14 03:29:25 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void): _nfix(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void){
	
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &cpy){
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Fixed & Fixed::operator=(const Fixed & value){
	std::cout << "Copy assignment operator called" << std::endl;
	this-> _nfix = value.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nfix);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_nfix = raw;
	return ;
}
