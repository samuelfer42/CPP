/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 04:35:42 by safernan          #+#    #+#             */
/*   Updated: 2022/06/02 04:35:56 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

struct Data
{
	std::string	str;
};


// cette fonction renverra le paramètre dans un type entier.

//type entier non signé capable de stocker un pointeur de données.
// signifie généralement qu'il a la même taille qu'un pointeur

// uintptr_test un type entier non signé capable de stocker un
// pointeur de données. Ce qui signifie généralement
// qu'il a la même taille qu'un pointeur.

// que tout pointeur valide peut être converti en ce type


// utilise Principalement pour les opérations au niveau du bit sur les pointeurs
//  C++, on ne peut pas effectuer d'opérations au niveau du bit sur des pointeurs.

// Ainsi, pour effectuer des opérations au niveau du bit sur des pointeurs,
// il faudrait convertir les pointeurs en type unitpr_t,
// puis effectuer des opérations au niveau du bit.
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

// je prend ma classe data et la convertit type entier non signe
// jenvois la retour dans la 2eme fonction
// je verifie si elle est egale a la premiere

// Une sorte de swapp en gros 

int 			main() {
	Data		data;
	Data		*new_data ;
	uintptr_t 	raw;


	data.str = "Cet exercice est nul";

	raw = serialize(&data);

	new_data = deserialize(raw);

	std::cout  << &data << std::endl;
	std::cout << new_data  << std::endl;
	return 0;
}