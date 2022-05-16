/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:38:20 by safernan          #+#    #+#             */
/*   Updated: 2022/05/16 04:59:33 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void): _fix_value(0){
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int fixedPointValue) : _fix_value(fixedPointValue << this->_f_bit)
{
//    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatingPointValue) : _fix_value(roundf(floatingPointValue * pow(2, this->_f_bit)))
{
//    std::cout << "Float constructor called" << std::endl;
}


Fixed::~Fixed(void){
	
//	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &cpy){
//	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Fixed   &Fixed::operator=(Fixed const &rhs)
{
//   std::cout << "Copy assignment operator called" << std::endl;
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

Fixed &Fixed::min(Fixed &val1, Fixed &val2)
{
	if (val1 < val2)
		return (val1);
	return (val2);
}

Fixed &Fixed::max(Fixed &val1, Fixed &val2)
{
	if (val1 < val2)
		return (val2);
	return (val1);
}


Fixed const &Fixed::min(const Fixed &val1, const Fixed &val2)
{
	if (val1 < val2) 
		return (val1);
	return (val2);
}

Fixed const	&Fixed::max(const Fixed &val1, const Fixed &val2)
{
	if (val1 < val2)
		return (val2);
	return (val1);
}

Fixed	&Fixed::operator++(void) //++a
{
	setRawBits(++_fix_value);
	return(*this);
}

Fixed	Fixed::operator++(int) //a++
{
	Fixed	a(*this);

	setRawBits(++_fix_value);
	return(a);
}


Fixed&	Fixed::operator--(void) //--a
{
	setRawBits(--_fix_value);
	return(*this);
}

Fixed	Fixed::operator--(int) //a--
{
	Fixed	a(*this);

	setRawBits(--_fix_value);
	return(a);
}

bool	Fixed::operator>(Fixed const &val) const
{
	return (_fix_value > val._fix_value);
}

bool	Fixed::operator<(Fixed const &val) const
{
	return (_fix_value < val._fix_value);
}

bool	Fixed::operator>=(Fixed const &val)
{
	return (_fix_value >= val._fix_value);
}

bool	Fixed::operator<=(Fixed const &val)
{
	return (_fix_value <= val._fix_value);
}

bool	Fixed::operator==(Fixed const &val)
{
	return (_fix_value == val._fix_value);
}

bool	Fixed::operator!=(Fixed const &val)	
{
	return (_fix_value != val._fix_value);
}

Fixed	Fixed::operator*(Fixed const &val) const
{
	Fixed a;

	a.setRawBits((val._fix_value >> Fixed::_f_bit) * _fix_value);
	return(a);
}

Fixed	Fixed::operator+(Fixed const &val)
{
	Fixed	a;

	a.setRawBits(val._fix_value + _fix_value);
	return(a);
}

Fixed	Fixed::operator-(Fixed const &val)
{
	Fixed	a;

	a.setRawBits(val._fix_value - _fix_value);
	return(a);
}

Fixed	Fixed::operator/(Fixed const &val)
{
	Fixed	a;

	a.setRawBits((_fix_value << Fixed::_f_bit) / val._fix_value);
	return(a);
}
