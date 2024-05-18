/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:37:07 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:37:08 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	AAnimal::_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default constructor (dog) called" << std::endl;
}

Dog::Dog ( const Dog& other ) : AAnimal(other)
{
	std::cout << "Copy constructor (dog) called" << std::endl;
	*this = other;
}

void Dog::makeSound(void) const
{
	std::cout << "Woooof Wooofff" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &other)
    {
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
    }	
    return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor (dog) called" << std::endl;
	delete this->_brain;
}




