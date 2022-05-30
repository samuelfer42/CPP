/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 03:51:01 by safernan          #+#    #+#             */
/*   Updated: 2022/05/30 04:59:28 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
 
# include <iostream>

# include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:
		PresidentialPardonForm (std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm & cpy);
		~PresidentialPardonForm (void);

		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
	
		void		execute(Bureaucrat const & executor) const;
	
	private:
		std::string _target;
	

};

#endif