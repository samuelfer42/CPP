/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humanb.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:36:26 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 10:36:27 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include "iostream"

class HumanB {

	private:
		std::string name;
		Weapon* weapon;

	public:
	 	HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon& weapon);
		void attack(void) const;
};

#endif