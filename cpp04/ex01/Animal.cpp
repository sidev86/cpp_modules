/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:33:19 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:33:21 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type = "Animal";
	std::cout << "Default constructor (Animal) called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}

Animal& Animal::operator=( const Animal& other )
{
	if (this != &other)
		this->_type = other._type; 
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}
