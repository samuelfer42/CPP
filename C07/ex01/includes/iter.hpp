/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 02:57:31 by safernan          #+#    #+#             */
/*   Updated: 2022/06/05 03:14:00 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <cstdlib>
# include <stdio.h>
# include <string.h>

template <typename T>
void	iter(T *tab, int size, void (*function)(T const & param))
{
	int i = 0;
	if (!tab)
	{
		std::cout << "(NULL)\n";
		return ;
	}

	while (i < size)
	{
		(*function)(tab[i]);
		i++;
	}
	return ;
}

template<typename T>
void	print_value(T param)
{
	std::cout << "Value is : " << param << std::endl;
	return ;
}

#endif