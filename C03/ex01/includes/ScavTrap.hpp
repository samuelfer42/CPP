/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:51:45 by safernan          #+#    #+#             */
/*   Updated: 2022/05/17 23:13:46 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
 
# include <iostream>
# include "ClapTrap.hpp"
 
class ScavTrap : public ClapTrap {

	public:
		ScavTrap (std::string name);
		ScavTrap(ScavTrap & cpy);
		~ScavTrap (void);

		ScavTrap & operator=(ScavTrap const & rhs);

		void 	guardGate (void) const;
		void	attack(const std::string &target);


	protected:	
		ScavTrap (void);
	

};

#endif