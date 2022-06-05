/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 03:19:54 by safernan          #+#    #+#             */
/*   Updated: 2022/06/05 03:19:56 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Array.hpp"

int main(void)
{

	std::cout << "==================== Empty Array ====================" << std::endl;
	{
		Array<std::string> empty;
		Array<int>	empty_int;

		std::cout << "Size string: " << empty.size() << " Size int " << empty_int.size() << std::endl;	
		try
		{
			empty[5] = "Coucou";
			empty_int[2] = 5;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << "==================== Multiple Array ====================" << std::endl;
	{
		Array<std::string> array1(3);
		Array<int> array2(5);

		std::cout << "Size Array1: " << array1.size() << " Size Array2: " << array2.size()<< std::endl;
		array1[0] = "Hello World";
		array1[1] = "Lorem ipsum";
		array1[2] = "Coucou";
		std::cout << "===== String array" << std::endl;
		for (int i = 0; i < array1.size(); i++)
			std::cout << "array1[" << i << "] = " << array1[i] << std::endl;
		for (int i = 0; i < 5; i++)
			array2[i] = i;
		std::cout << "===== Int array" << std::endl;
		for (int i = 4; i >= 0; i--)
			std::cout << "array2[" << i << "] = " << array2[i] << std::endl;
		std::cout << "===== Overflow test" << std::endl;
		try
		{
			std::cout << "array2[50] = " << array2[50];  
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " <<  e.what() << std::endl;
		}		
	}
	std::cout << "====================Assignation test ====================" << std::endl;
	{
		Array<std::string> ex(3);
	
		ex[0] = "Line 1";
		ex[1] = "Line 2";
		ex[2] =	"Line 3";

		Array<std::string> cpy(ex);
		cpy[0] = "Copy 1";
		cpy[1] = "Copy 2";
		cpy[2] = "Copy 3";

		Array<std::string> asign;
		asign = ex;
		asign[0] = "Asign 1";
		asign[1] = "Asign 2";
		asign[2] = "Asign 3";

		ex[0] = "Line 1FA";
		ex[1] = "Line 2FA";
		ex[2] =	"Line 3FA";

		std::cout << "ex 1 = " << ex[0] << std::endl;
		std::cout << "ex 2 = " << ex[1] << std::endl;
		std::cout << "ex 3 = " << ex[2] << std::endl;

		std::cout << "cpy 1 = " << cpy[0] << std::endl;
		std::cout << "cpy 2 = " << cpy[1] << std::endl;
		std::cout << "cpy 3 = " << cpy[2] << std::endl;

		std::cout << "asign 1 = " << asign[0] << std::endl;
		std::cout << "asign 2 = " << asign[1] << std::endl;
		std::cout << "asign 3 = " << asign[2] << std::endl;

	}

	//return (0);
}