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

 
class Animal {

	public:
		Animal (void);
		Animal(Animal & cpy);
		virtual ~Animal (void);

		Animal & operator=(Animal const & rhs);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
		virtual Brain*	getBrain(void);

	protected:
		std::string type;
	


};

#endif