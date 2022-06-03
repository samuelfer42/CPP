/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 05:07:58 by safernan          #+#    #+#             */
/*   Updated: 2022/06/03 05:21:22 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
 
# include <string>
# include <iostream>
# include <cstdlib>

class Base {

	public:
		virtual ~Base (void);	

};

class A: public Base{};
class B: public Base{};
class C: public Base{};

#endif