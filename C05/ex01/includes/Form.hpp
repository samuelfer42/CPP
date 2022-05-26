/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 04:57:42 by safernan          #+#    #+#             */
/*   Updated: 2022/05/26 05:17:26 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
 
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat; 

class Form {

	public:
		
		Form (std::string const &name, int const &gradetosign, int const &gradetoexec);
		Form(Form & cpy);
		~Form (void);

		Form & operator=(Form const & rhs);

		void	beSigned(Bureaucrat const &Bureaucrat);
		int					getGradeToSign(void) const;
		int					getGradeToExec(void) const;
		bool				isSigned(void) const;
		const std::string	&getName(void) const; 
		
		
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
				

	private:
	
		const std::string 	_name;
		bool 				_signed;
		const int 			_grade_to_sign;
		const int			_grade_to_exec;
		
};

std::ostream & operator<<(std::ostream &ostr, const Form & instance);

#endif

