/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 04:22:25 by safernan          #+#    #+#             */
/*   Updated: 2022/06/04 04:36:37 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"

int main( void ) {

	//int a = 2;
	//int b = 3;
	//::swap( a, b );
	//std::cout << "a = " << a << ", b = " << b << std::endl;
	//std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	//std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	//std::string c = "chaine1";
	//std::string d = "chaine2";
	//::swap(c, d);
	//std::cout << "c = " << c << ", d = " << d << std::endl;
	//std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	//std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	//return 0;
	
	std::cout << "-------------> SWAP string <------------------" << std::endl;

	std::string str_1 = "coucou";
	std::string str_2 = "adieuu";

	std::cout << "Avant Swap ";
	std::cout << "str_1 = "<< str_1 << "\tstr_2 = " << str_2 << std::endl;
	::swap(str_1, str_2);
	std::cout << "Apres Swap ";
	std::cout << "str_1 = "<< str_1 << "\tstr_2 = " << str_2 << std::endl<< std::endl;


	std::cout << "------------> SWAP int <------------------" << std::endl;
	int a = 42;
	int b = 1567;

	std::cout << "Avant Swap ";
	std::cout << "str_1 = "<< a << "\tstr_2 = " << b << std::endl;
	::swap(a, b);
	std::cout << "Apres Swap ";
	std::cout << "str_1 = "<< a << "\tstr_2 = " << b << std::endl << std::endl;


	std::cout << "------------> MIN int <------------------"<< std::endl;
	a = 42;
	b = 777;
	std::cout << "Avant Min ";
	std::cout << "str_1 = "<< a << "\tstr_2 = " << b << std::endl;
	std::cout << "Apres Min ";
	std::cout << "Le plus petit = " << ::min( a, b ) << std::endl << std::endl;


	std::cout << "------------> MIN Egal <------------------"<< std::endl;
	a = 42;
	b = 42;
	std::cout << "Avant Min ";
	std::cout << "str_1 = "<< a << "\tstr_2 = " << b << std::endl;
	std::cout << "Apres Min ";
	std::cout << "Egal = " << ::min( a, b ) << std::endl << std::endl;


	std::cout << "------------> MAX float <-----------------"<< std::endl;
	float f1 = 42.54;
	float f2 = 456.56745;
	std::cout << "Avant Max ";
	std::cout << "str_1 = "<< f1 << "\tstr_2 = " << f2 << std::endl;

	std::cout << "Apres Max ";
	std::cout << "Plus grand = " << ::max(f1, f2) << std::endl;

	return 0;

}


	