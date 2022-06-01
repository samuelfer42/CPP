/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:09:30 by safernan          #+#    #+#             */
/*   Updated: 2022/06/01 02:52:40 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Convert.hpp"

Convert::Convert(char const *input)
{
	std::string inputs(input);
	int pos = inputs.find(".") + 1;
	int i = pos;
	
	while(input[i] && isdigit(input[i]))
		i++;
	this->_precision = i - pos;
	
	if (strlen(input) == 1 && isascii(input[0]) && !isdigit(input[0]))
		this->_input = input[0];
	else
		this->_input = atof(input);
	std::cout << "Convert default constructor called" << std::endl;
	return ;
}

int		Convert::int_convert(void) const
{
	if(isnan(this->_input) || isinf(this->_input) || 
		this->_input < static_cast<double>(-2147483648) || 
		this->_input > static_cast<double>(+2147483647) )
		throw Convert::InvalidConversion();
	return static_cast<int>(this->_input);
}

char 	Convert::char_convert(void) const
{
	if(isnan(this->_input) || isinf(this->_input) || 
		this->_input < static_cast<double>(INT_MIN) ||
		this->_input > static_cast<double>(INT_MAX) || !isascii(this->_input))
		throw Convert::InvalidConversion();
	if (!std::isprint(this->_input))
		throw Convert::NotDisplayable();
	return(static_cast<char>(this->_input));
}

float	Convert::float_convert(void) const
{
	return static_cast<float>(this->_input);
}

double	Convert::double_convert(void) const
{
	return this->_input;
}

int	Convert::getPrecision(void) const
{
	return this->_precision;
}

void	Convert::aff_Char(void) const
{
	std::cout << "Char: ";
	try
	{
		std::cout << this->char_convert() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Convert::aff_Int(void) const
{
	std::cout << "Int: ";
	try
	{
		std::cout << this->int_convert() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Convert::aff_Float(void) const 
{
	std::cout << "Float: ";
	try
	{
		std::cout << std::setprecision(this->_precision) 
				<< std::fixed << this->float_convert() << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Convert::aff_Double(void) const 
{
	std::cout << "Double: ";
	try
	{
		std::cout << std::setprecision(this->_precision) 
				<< std::fixed << this->double_convert() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
Convert::Convert(Convert & cpy)
{
	std::cout << "Convert Copy constructor called"<< std::endl;
	this->_input = cpy._input;
	this->_precision = cpy._precision;
	*this = cpy;
	return ;
}

Convert & Convert::operator=(Convert const & rhs)
{
	(void)rhs;
	return *this;
}

Convert::~Convert(void)
{
	std::cout << "Convert destructor called "<< std::endl;
	return ;
}

const char* Convert::NotDisplayable::what() const throw()
{
	return ("Not displayable");
}

const char* Convert::InvalidConversion::what() const throw()
{
	return ("impossible");
}