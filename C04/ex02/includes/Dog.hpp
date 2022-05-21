/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:24:11 by safernan          #+#    #+#             */
/*   Updated: 2022/05/21 01:16:58 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
 
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"


class Dog : public A_Animal {

	public:
		Dog (void);
		Dog(Dog & cpy);
		~Dog (void);

		virtual Dog & operator=(Dog const & rhs);
		virtual A_Animal & operator=(A_Animal const & rhs);

		virtual void makeSound(void) const;
		virtual Brain* getBrain(void) const;

	private:
		Brain* brain;

};

#endif