/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:32:17 by safernan          #+#    #+#             */
/*   Updated: 2022/05/20 04:43:57 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main(void)
{
	Animal *animals[10];

	for (int i = 0; i < 5; i++)
	{
		animals[i] = new Cat();
			std::cout << "====== > CAT-- Number : " << i +1 << " < ======" << std::endl << std::endl;
	}
	std::cout << "=================================" << std::endl << std::endl;
	for (int i = 5; i < 10; i++)
	{
		animals[i] = new Dog();
		std::cout << "====== > DOG-- Number : " << i - 4 << " < ======" << std::endl << std::endl;
	}

		std::cout << "====================== DEBUG" << std::endl;
		
		animals[1]->getBrain()->setIdeasIndex("Une petite idee", 5);
		
		animals[6]->getBrain()->setIdeasIndex("Une autre idee", 6);	
		
		std::cout << "> Animal idea type : " << animals[1]->getType() << " : " << animals[1]->getBrain()->getIdeasIndex(5) << std::endl;
		
		std::cout << "> Animal idea type : " << animals[6]->getType() << " : " << animals[6]->getBrain()->getIdeasIndex(6) << std::endl;
					
		std::cout << "====================== DEBUG" << std::endl;

	for (int i = 0; i < 10; i++){
		delete animals[i];
		std::cout << "=== --ANIMAL-- Number : " << i +1 << " < ===" << std::endl << std::endl;
	}
	return (0);
}

//int main()
//{
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	delete j;//should not create a leak
//	delete i;
//	
//	return 0;
//}