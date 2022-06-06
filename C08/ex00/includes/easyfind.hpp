/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 05:10:53 by safernan          #+#    #+#             */
/*   Updated: 2022/06/06 07:58:05 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>


template<typename T>
typename T::iterator	 easyfind(T &containers, int value)
{
	typename T::iterator it;
	
	it = std::find(containers.begin(), containers.end(), value);
	
	if (it == containers.end())
		throw std::logic_error("Not found");
	return(it);
}

#endif