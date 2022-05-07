/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:29:22 by safernan          #+#    #+#             */
/*   Updated: 2022/05/07 02:17:00 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

void Weapon::setType(std::string type){
	this->type = type;
	return ;
}

const std::string &Weapon::getType(void) const{
	return (this->type); 
}

Weapon::Weapon(std::string type) : type(type){
	return ; 
}

Weapon::~Weapon(void){
	return ; 
}