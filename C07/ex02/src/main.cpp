/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 03:19:54 by safernan          #+#    #+#             */
/*   Updated: 2022/06/11 04:46:14 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Array.hpp"

int main(void)
{

	std::cout << "========== Empty Array ========== "<< std::endl;
	{
		Array<std::string> empty(0);
		std::cout << "Empty Array Create" << std::endl;
		std::cout << "Size string: " << empty.size() << std::endl;	
		std::cout << "\t===== Overflow test" << std::endl;
		try
		{
			empty[6] = "Coucou";
		}
		catch(const std::exception& e)
		{
			std::cerr << "\tError: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	
	std::cout << "==========Multiple Array ==========" << std::endl;
	{
		Array<std::string> array(3);

		std::cout << "Size Array: " << array.size() << std::endl;
		array[0] = "Hello World";
		array[1] = "Lorem ipsum";
		array[2] = "Coucou";
		
		std::cout << "===== String array" << std::endl;
		for (int i = 0; i < array.size(); i++)
			std::cout << "array[" << i << "] = " << array[i] << std::endl;



		std::cout << "\t===== Overflow test" << std::endl;
		try
		{
			std::cout << "\tarray[5] = " << array[5];  
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " <<  e.what() << std::endl;
		}		
	}
}
