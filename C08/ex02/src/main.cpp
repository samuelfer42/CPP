/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 07:57:50 by safernan          #+#    #+#             */
/*   Updated: 2022/06/06 08:23:53 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"
#include <list>
int main()
{	
	{
		std::cout << "========== Subject test : MutantStack ==========" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	{
		std::cout << "========== Subject test : List ==========" << std::endl;
		std::list<int> mstack;
		mstack.push_front(5);
		mstack.push_front(17);
		std::cout << mstack.front() << std::endl;
		mstack.pop_front();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		std::cout << "========== Basic test ==========" << std::endl;
		MutantStack<int> mstack;
		MutantStack<int>::iterator it;
		MutantStack<int>::iterator ite;

		for (int i = 0; i < 10; i++)
			mstack.push(i);
		it = mstack.begin();
		ite = mstack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			it++;
		}
	}

	return 0;
}