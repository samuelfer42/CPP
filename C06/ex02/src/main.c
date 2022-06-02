/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 04:37:17 by safernan          #+#    #+#             */
/*   Updated: 2022/06/02 04:37:25 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <cstdlib>

class		Base
{
	public :
		virtual~Base();
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base::~Base(){}


Base		*generate(void)
{
	int r = std::rand() % 3;

	if (r == 0)
	{
		std::cout << "Rand = A\n";
		return (new A);
	}
	else if (r== 1)
	{
		std::cout << "Rand = B\n";
		return (new B);
	}
	else if (r == 2)
	{
		std::cout << "Rand = C\n";
		return (new C);
	}
	return (NULL);
}

void		identify(Base* p)
{
	/*on verifie si le downcast est possible, type plus precis vers type moin precis .
	si le dynamic cast ne reussi pas c'est qu'il ne correspond pas au type reel de (p)
	qui a ete instancier ds la fonction generate */

	std::cout << "\t Pointeur is\n";
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C\n";
	return ;
}

void		identify_v2(Base& p)
{
	/*meme chose que en haut sauf que pour avoir moin de ligne
    et ne pas faire appel au exeption j'ai opter directement
    a fait le cast dans le if , petite astuce*/

	std::cout << "\t Reference is\n";
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A\n";
		return;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B\n";
		return;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C\n";
		return;
	}
	catch(const std::exception& e)
	{
		 // std::cerr << e.what() << '\n';
	}
}

int main()
{
	srand(time(NULL));

	Base *base = generate();
	identify(base);
	identify_v2(*base);
	delete base;
	return (0);
}