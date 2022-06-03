/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 04:35:42 by safernan          #+#    #+#             */
/*   Updated: 2022/06/03 04:54:45 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Data.h"

uintptr_t		serialize(Data* ptr)
{
	uintptr_t type = reinterpret_cast<uintptr_t>(ptr);
	return (type);

}

Data			*deserialize(uintptr_t raw)
{
	Data *data = reinterpret_cast<Data *>(raw);
	return (data);
}

int main(void)
{

	Data *data = new Data;
	Data		*new_data ;
	uintptr_t 	raw;

	data->str = "Ceci est un teste";
	std::cout << "Str: " << data->str << std::endl;
	

	raw = serialize(data);
	new_data = deserialize(raw);

	std::cout  << data << std::endl;
	std::cout << new_data  << std::endl;
	
	std::cout << "Str: " << new_data->str << std::endl;
	

	return 0;


}