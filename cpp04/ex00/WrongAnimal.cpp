/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:32:35 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:32:36 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "WrongAnimal";
	std::cout << "Default constructor (WrongAnimal) called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "Copy constructor called (WrongAnimal)" << std::endl;
	*this = other;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal sound" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other )
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}
