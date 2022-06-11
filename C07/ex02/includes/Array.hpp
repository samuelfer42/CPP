/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 03:19:30 by safernan          #+#    #+#             */
/*   Updated: 2022/06/11 04:33:21 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
 
# include <iostream>
 
template<typename T>
class Array {
	
	public:
		Array<T> (void)
		{
			std::cout << "Array default constructor called" << std::endl;
			this->_array = NULL;
			this->_size = 0;
		}

		Array<T>(const unsigned int size)
		{
			std::cout << "Array overload constructor called" << std::endl;
			this->_array = new T[size];
			this->_size = size;
		}

		Array<T>(Array<T> & cpy)
		{
			std::cout<< "Array cpy constructor called" << std::endl;
			*this = cpy;
			return ;
		}	

		Array<T> & operator=(Array<T> & rhs)
		{
			std::cout << "Array assignation operator called" << std::endl;
			if (this == &rhs)
				return *this;
			this->_size = rhs.size();
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs[i];	
			return *this;
		}

		T & operator[](unsigned int index) const
		{
			if (!this->_size || index >= this->_size)
				throw std::out_of_range("Out of range");
			return this->_array[index];
		}
		
		~Array<T>(void)
		{
			std::cout << "Array destructor called" << std::endl;
			delete [] this->_array;
			return;
		}

		int		size(void) const
		{
			return this->_size;
		}

	private:
		unsigned int	_size;
		T *_array;

};

template<typename T>
std::ostream	&	operator<<(std::ostream & os, const Array<T> & instance)
{
	if (instance.size())
		os << instance[0];
	else
		os << 0;
	return (os);
}
#endif