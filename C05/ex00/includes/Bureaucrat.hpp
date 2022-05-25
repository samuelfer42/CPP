/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 01:17:46 by safernan          #+#    #+#             */
/*   Updated: 2022/05/25 02:09:38 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
 
# include <iostream>
 
class Bureaucrat {

		private:
		std::string _name;
		int			_grade;

	public:
		Bureaucrat (std::string const &name, int const &grade);
		Bureaucrat(Bureaucrat & cpy);
		~Bureaucrat (void);

		Bureaucrat & operator=(Bureaucrat const & rhs);
		
		const std::string 	getName(void) const;
		int					getGrade(void) const;
		void				promotion(void);
		void				destitution(void);
		
		class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too high");
			}
	};

	class GradeTooLowException  : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too low");
			}
	};

};

std::ostream & operator<<(std::ostream &ostr, const Bureaucrat &instance);

#endif