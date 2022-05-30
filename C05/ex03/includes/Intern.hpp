/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 05:14:01 by safernan          #+#    #+#             */
/*   Updated: 2022/05/30 05:31:02 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP
 
# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Form;

class Intern {

	public:
		Intern (void);
		Intern(Intern & cpy);
		virtual ~Intern (void);

		Intern & operator=(Intern const & rhs);

		Form	*makeForm(std::string  const name, std::string  const target);

		class NotFoundExeception : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form not found");
				}
		};
};

Form *return_pres(std::string target);
Form *return_robot(std::string target);
Form *return_shrub(std::string target);

#endif