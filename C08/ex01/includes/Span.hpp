/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 05:51:18 by safernan          #+#    #+#             */
/*   Updated: 2022/06/06 07:58:01 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
 
# include <vector>
# include <iostream>
# include <algorithm>
# include <stdlib.h> 

  
class Span {

	public:
		Span (unsigned int const & n);
		Span(Span const & cpy);
		~Span (void);

		Span & operator=(Span const & rhs);

		void	addNumber(const int &nb);
		std::vector<int>	getTab() const;
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

	private:
		unsigned int _size_max;
		std::vector<int> _vnb;
		Span (void);
	

};

#endif