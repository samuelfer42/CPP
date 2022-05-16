/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:54:03 by safernan          #+#    #+#             */
/*   Updated: 2022/05/17 00:17:45 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP
 
# include <iostream>
 
class ClapTrap {

	public:
		ClapTrap (std::string name);
		ClapTrap(ClapTrap & cpy);
		~ClapTrap (void);

		ClapTrap & operator=(ClapTrap const & rhs);

		void	attack(const std::string &target);
		void 	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string _name;
		int			_hit_point;
		int			_energy_point;
		int			_attack_dammage;
		

};

#endif
