/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:18:14 by sibrahim          #+#    #+#             */
/*   Updated: 2024/02/26 10:18:17 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_num = 0;
}


Fixed::Fixed(const int int_num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_num = int_num << _fract_bits;
}

Fixed::Fixed(const float float_num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_num = (roundf(float_num * (1 << _fract_bits)));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}


float Fixed::toFloat( void ) const
{	
	return static_cast<float>( this->getRawBits() ) / ( 1 << _fract_bits );
	
}

int Fixed::toInt( void ) const
{
	//std::cout << "Int member function called" << std::endl;
	return (this->_fixed_num >> _fract_bits);

}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixed_num = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& fixed)
{
	COUT << fixed.toFloat();
	return COUT;
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_num;
}

void Fixed::setRawBits( int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_num = raw;
}



