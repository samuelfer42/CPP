/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:06:06 by safernan          #+#    #+#             */
/*   Updated: 2022/06/01 04:18:30 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Convert.hpp"

int main(int argc, char **argv)
{
	Convert	*conv;
	int		i=1;
	
	(void)argc;

	while (argv[i])
	{
		conv = new Convert(argv[i]);
		std::cout << "===>>" << argv[i]42.0f << std::endl;
		conv->aff_Char();
		conv->aff_Int();
		conv->aff_Float();
		conv->aff_Double();
		delete conv;
		i++;
	}
	return (0);
}