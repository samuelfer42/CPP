/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:30:02 by safernan          #+#    #+#             */
/*   Updated: 2022/05/07 02:16:42 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "string"
# include "iostream"

class Weapon{
	
	private:
		std::string type;
	
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string &getType(void) const;
		void		setType(std::string type);
};



#endif