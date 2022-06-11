/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 04:22:25 by safernan          #+#    #+#             */
/*   Updated: 2022/06/11 04:07:03 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"

int main( void ) {
	
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


//class Awesome
//{
//	public:
//	Awesome(void) : _n(0) {}
//	Awesome( int n ) : _n( n ) {}
//	Awesome & operator= (Awesome & a) {
//		_n = a._n; return *this; }
//	bool operator==( Awesome const & rhs ) const { 
//		return (this->_n == rhs._n); }
//	bool operator!=( Awesome const & rhs ) const{ 
//		return (this->_n != rhs._n); } 
//	bool operator>( Awesome const & rhs ) const { 
//		return (this->_n > rhs._n); } 
//	bool operator<( Awesome const & rhs ) const { 
//		return (this->_n < rhs._n); } 
//	bool operator>=( Awesome const & rhs ) const { 
//		return (this->_n >= rhs._n); } 
//	bool operator<=( Awesome const & rhs ) const {
//		return (this->_n <= rhs._n); } 
//	int get_n() const { return _n; } 
//	private: 
//		int _n; 
//};
//	std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }
//
//int main(void)
//{
//	Awesome a(2), b(4); swap(a,b);
//	std::cout << a << " " << b << std::endl;
//	std::cout << max(a, b) << std::endl;
//	std::cout << min(a, b) << std::endl;
//	return (0);
//}