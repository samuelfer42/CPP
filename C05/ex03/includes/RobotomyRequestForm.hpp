/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 03:50:58 by safernan          #+#    #+#             */
/*   Updated: 2022/05/30 04:51:35 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
 
# include <iostream>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm (std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm & cpy);
		~RobotomyRequestForm (void);

		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
		
		void		execute(Bureaucrat const & executor) const;
	private:
		std::string _target;

};

#endif