/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:38:20 by safernan          #+#    #+#             */
/*   Updated: 2022/05/16 04:27:29 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void): _fix_value(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int fixedPointValue) : _fix_value(fixedPointValue << this->_f_bit)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatingPointValue) : _fix_value(roundf(floatingPointValue * pow(2, this->_f_bit)))
{
    std::cout << "Float constructor called" << std::endl;
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

Fixed   &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fix_value = rhs.getRawBits();
    return *this;
}

int		Fixed::getRawBits(void) const{
	return (this->_fix_value);
}

void	Fixed::setRawBits(int const raw){
	this->_fix_value = raw;
	return ;
}

int     Fixed::toInt(void) const
{
    return (this->_fix_value >> this->_f_bit);
}

float   Fixed::toFloat(void) const
{
    return (this->_fix_value / pow(2, this->_f_bit));
}

std::ostream &operator<<(std::ostream &o, Fixed const &value)
{
    o << value.toFloat();
    return o;
}
