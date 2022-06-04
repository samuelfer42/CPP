/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 04:22:49 by safernan          #+#    #+#             */
/*   Updated: 2022/06/04 04:23:04 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename S>
void 		swap(S &a, S & b)
{
	S swap;
	swap = a;
	a = b;
	b = swap;
	return ;
}

template<typename T>
T const 	&min(T const &a, T const &b)
{

	return (a < b ? a : b);
}

template<typename T>
T const 	&max(T const &a, T const &b)
{

	return (a > b ? a : b);
}

#endif