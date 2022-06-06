/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 03:19:54 by safernan          #+#    #+#             */
/*   Updated: 2022/06/06 04:33:37 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Array.hpp"

int main(void)
{

	std::cout << "========== Empty Array ========== "<< std::endl;
	{
		Array<std::string> empty;
		
		std::cout << "Size string: " << empty.size() << std::endl;	
		try
		{
			empty[5] = "Coucou";
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	
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



		std::cout << "===== Overflow test" << std::endl;
		try
		{
			std::cout << "array[5] = " << array[5];  
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " <<  e.what() << std::endl;
		}		
	}
	std::cout << "========== Assignation test ==========" << std::endl;
	{
		Array<std::string> ex(2);
	
		ex[0] = "Line 1";
		ex[1] = "Line 2";

		Array<std::string> cpy(ex);
		cpy[0] = "Copy 1";
		cpy[1] = "Copy 2";

		Array<std::string> asign;
		asign = ex;
		asign[0] = "Asign 1";
		asign[1] = "Asign 2";

		ex[0] = "Line 1FA";
		ex[1] = "Line 2FA";

		std::cout << "ex 1 = " << ex[0] << std::endl;
		std::cout << "ex 2 = " << ex[1] << std::endl;

		std::cout << "cpy 1 = " << cpy[0] << std::endl;
		std::cout << "cpy 2 = " << cpy[1] << std::endl;

		std::cout << "asign 1 = " << asign[0] << std::endl;
		std::cout << "asign 2 = " << asign[1] << std::endl;
	}
}