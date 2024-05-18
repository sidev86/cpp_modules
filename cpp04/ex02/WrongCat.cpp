/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:40:37 by sibrahim          #+#    #+#             */
/*   Updated: 2024/03/06 10:40:38 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	WrongAnimal::_type = "WrongCat";
	std::cout << "Default constructor (wrongcat) called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meeeoooooowwwwwww" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor (wrongcat) called" << std::endl;
}
