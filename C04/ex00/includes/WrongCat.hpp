/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:41:19 by safernan          #+#    #+#             */
/*   Updated: 2022/05/18 03:41:47 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
 
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat (void);
		WrongCat(WrongCat & cpy);
		~WrongCat (void);

		WrongCat & operator=(WrongCat const & rhs);
		void	makeSound(void) const ;

};

#endif