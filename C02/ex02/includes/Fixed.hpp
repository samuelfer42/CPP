/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:38:24 by safernan          #+#    #+#             */
/*   Updated: 2022/05/16 04:58:49 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	public:
		Fixed (void);
		Fixed (const int fixed_value);
		Fixed (const float float_value);
		
		Fixed(const Fixed &cpy);
		~Fixed (void);

		Fixed 	&operator= (const Fixed &value);
		
		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
		
		float	toFloat (void) const;
		int		toInt(void) const;

		static Fixed &min(Fixed &val1, Fixed &val2);
		static Fixed &max(Fixed &val1, Fixed &val2);

		static Fixed const &min(const Fixed &val1, const Fixed &val2);
		static Fixed const &max(const Fixed &val1, const Fixed &val2);

		Fixed   &operator++(void); //++a
		Fixed	operator++(int);   //a++
		Fixed   &operator--(void); //--a
		Fixed	operator--(int);   //a--


		bool	operator>(Fixed const &val) const;
		bool	operator<(Fixed const &val) const;

		bool	operator>=(Fixed const &val);
		bool	operator<=(Fixed const &val); 
		bool	operator==(Fixed const &val); 
		bool	operator!=(Fixed const &val);

		Fixed	operator+(Fixed const &val);
		Fixed	operator-(Fixed const &val);
		Fixed	operator/(Fixed const &val);
		Fixed	operator*(Fixed const &val) const;
			
	private:
		int					_fix_value;
		static const int	_f_bit = 8;
		
		
};

std::ostream &operator<<(std::ostream &cout, Fixed const &point_a);

#endif
