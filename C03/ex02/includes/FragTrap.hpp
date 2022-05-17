/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:46:39 by safernan          #+#    #+#             */
/*   Updated: 2022/05/17 23:55:30 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
 
# include <iostream>
# include "../includes/ClapTrap.hpp"
 
class FragTrap : public ClapTrap {

	public:
		FragTrap (std::string name);
		FragTrap(FragTrap & cpy);
		~FragTrap (void);

		FragTrap & operator=(FragTrap const & rhs);
		
		void highFivesGuyes(void) const;
		void attack(const std::string & target);
	

};

#endif