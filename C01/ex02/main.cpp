/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:23:19 by safernan          #+#    #+#             */
/*   Updated: 2022/05/06 10:26:00 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"

int main (void)
{
	std::string name = "HI THIS IS BRAIN";	
	std::string* stringPTR = &name;
	std::string& stringREF = name;
	
	std::cout << "Adresse of string    : " << &name << std::endl;
	std::cout << "Adresse of stringREF : " << &stringREF << std::endl; 
	std::cout << "Adresse of stringPTR : " << &stringPTR << std::endl; 
	
	std::cout << "Value of string      : " << name << std::endl;
	std::cout << "Value of stringREF   : " << stringREF << std::endl; 
	std::cout << "Value of stringPTR   : " << *stringPTR << std::endl; 
	
	return (0);
}
