/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:09:26 by safernan          #+#    #+#             */
/*   Updated: 2022/06/01 02:52:43 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
 
# include <iostream>
# include <climits>
# include <math.h>
# include <string.h>
# include <iomanip>


class Convert {

	public:
		Convert (char const *input);
		Convert(Convert & cpy);
		~Convert (void);
		
		int		int_convert(void) const;
		char	char_convert(void) const;
		float	float_convert(void) const;
		double	double_convert(void) const;
		void	aff_Char(void) const;
		void	aff_Int(void) const;
		void	aff_Float(void) const;
		void	aff_Double(void) const;
		int		getPrecision(void) const;
		
		
		
		Convert & operator=(Convert const & rhs);


		class InvalidConversion : public std::exception {
			
			public:
				virtual const char* what() const throw();
		};

		class NotDisplayable : public std::exception {
			
			public:
				virtual const char* what() const throw();
		};

	private:
		double 	_input;
		int 	_precision;
	

};

#endif