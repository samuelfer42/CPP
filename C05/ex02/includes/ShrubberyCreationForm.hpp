/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 03:50:49 by safernan          #+#    #+#             */
/*   Updated: 2022/05/30 03:50:52 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
 
# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm (std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm & cpy);
		virtual ~ShrubberyCreationForm (void);

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

		 void		execute(Bureaucrat const & executor) const;
	private:
		std::string	_target;

};

#endif