/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 07:57:47 by safernan          #+#    #+#             */
/*   Updated: 2022/06/06 08:07:23 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
 
# include <iostream>
# include <stack>
 
template <typename T>
class MutantStack : public std::stack<T> {

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		MutantStack (void) {}
		MutantStack(MutantStack & cpy) : std::stack<T>(cpy){}
		~MutantStack (void) {}

		MutantStack & operator=(MutantStack const & rhs)
		{
			this->c = rhs.c;
			return *this;
		}
		
		iterator begin(void)
		{
			return this->c.begin();
		}

		iterator end(void)
		{
			return this->c.end();
		}
	

};

#endif