/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:47:00 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/22 10:47:01 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	this->setType(weaponType);
}

Weapon::~Weapon(void)
{

}

const std::string& Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string weaponType)
{
	this->_type = weaponType;
}

