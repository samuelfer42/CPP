/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 02:59:36 by safernan          #+#    #+#             */
/*   Updated: 2022/06/11 04:21:17 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/iter.hpp"

int main()
{
	char				array[] = "TEST";
	std::string			tab[3] = {"Un", "Super", "Test"};
	float				 tab_f[5] = {0.1f, 1.1f, 2.2f, 3.3f, 4.4f};
	int					tab_i[3] = {0, 1, 2};
	char				*tab_n = NULL;

	std::cout << "---> tableau char <---" << std::endl;
	iter(array, strlen(array), print_value);

	std::cout << "---> tableau char len = 2 <---" << std::endl;
	iter(array, 2, print_value);

	std::cout << "---> tableau de string <---" << std::endl;
	iter(tab, 3, print_value);

	std::cout << "---> tableau int <---" << std::endl;
	iter(tab_i, 3, print_value);

	std::cout << "---> tableau float <---" << std::endl;
	iter(tab_f, 5, print_value);

	std::cout << "---> pointeur NULL <---" << std::endl;
	iter(tab_n, 3, print_value);
	return 0;
}


//class Awesome
//{
//	public:
//	Awesome( void ) : _n( 42 ) { return; } 
//	int get( void ) const { return this->_n; } 
//	private: 
//		int _n;
//}; 
//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get();return o; } 
//template< typename T >
//void print( T const & x ) { std::cout << x << std::endl; return; } 
//
//int main() 
//{ 
//	int tab[] = { 0, 1, 2, 3, 4 }; 
//	Awesome tab2[5];
//	iter( tab, 5, print );
//	iter( tab2, 5, print );
//	return 0; 
//}