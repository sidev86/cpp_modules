/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:32:08 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:32:09 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	Animal::_type = "Dog";
	std::cout << "Default constructor (dog) called" << std::endl;
}

Dog::Dog ( const Dog& other ) : Animal(other)
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
        this->_type = other._type;
    return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor (dog) called" << std::endl;
}




