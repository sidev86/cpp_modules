/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:32:01 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:32:02 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	Animal::_type = "Cat";
	std::cout << "Default constructor (cat) called" << std::endl;
}

Cat::Cat ( const Cat& other ) : Animal(other)
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
        this->_type = other._type;
    return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor (cat) called" << std::endl;
}
