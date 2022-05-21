/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:09:34 by safernan          #+#    #+#             */
/*   Updated: 2022/05/20 04:11:29 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
 
# include <iostream>
 
class Brain {

	public:
		Brain (void);
		Brain(Brain & cpy);
		~Brain (void);

		Brain & operator=(Brain const & rhs);
		void		setIdeasIndex(std::string const & ideas, int const & index);
		std::string getIdeasIndex(int const index) const;

	private:
		std::string ideas [100];
	

};

#endif