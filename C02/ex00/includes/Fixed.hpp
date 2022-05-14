/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:38:24 by safernan          #+#    #+#             */
/*   Updated: 2022/05/14 03:25:46 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	public:
		Fixed (void);
		Fixed(const Fixed &cpy);
		~Fixed (void);

		Fixed& operator= (const Fixed &value);
		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
	
	private:
		int					_nfix;
		static const int	_f_bit = 8;
		
		
};

#endif