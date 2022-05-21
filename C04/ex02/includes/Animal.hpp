/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:13:12 by safernan          #+#    #+#             */
/*   Updated: 2022/05/18 03:17:18 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP
 
# include <iostream>
# include "Brain.hpp"

 
class A_Animal {

	public:
		virtual ~A_Animal (void);

		virtual A_Animal & operator=(A_Animal const & rhs) = 0;

		std::string		getType(void) const;
		virtual void	makeSound(void) const =0 ;
		virtual Brain*	getBrain(void) const = 0;

	protected:
		std::string type;
	

};

#endif