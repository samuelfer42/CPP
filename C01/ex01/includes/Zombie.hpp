/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:26:45 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 10:16:48 by safernan         ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void SetName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif