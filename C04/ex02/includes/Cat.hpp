/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:24:08 by safernan          #+#    #+#             */
/*   Updated: 2022/05/21 01:17:05 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
 
# include <iostream>
# include "Animal.hpp"
 # include "Brain.hpp"

class Cat : public A_Animal {

	public:
		Cat (void);
		Cat(Cat & cpy);
		~Cat (void);

		virtual Cat & operator=(Cat const & rhs);
		virtual A_Animal & operator=(A_Animal const & rhs);
	

		virtual void makeSound(void) const;
		virtual Brain* getBrain(void) const;

	private:
		Brain* brain;
	

};

#endif