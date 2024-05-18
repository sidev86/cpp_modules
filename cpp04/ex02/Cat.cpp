/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:36:55 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:36:56 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	AAnimal::_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default constructor (cat) called" << std::endl;
}

Cat::Cat ( const Cat& other ) : AAnimal(other)
{
	std::cout << "Copy constructor (cat) called" << std::endl;
	*this = other;
}

void Cat::makeSound(void) const
{
	std::cout << "Meeeoooooowwwwwww" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &other)
    {
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
    }
    return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor (cat) called" << std::endl;
	delete this->_brain;
}
