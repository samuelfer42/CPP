/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:26:45 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 09:54:18 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "string"
# include "iostream"

class Zombie{
	private:
		std::string name;
	
	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
};

Zombie* 	newZombie( std::string name );
void		randomChump( std::string name );

#endif