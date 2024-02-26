#include "Fixed.hpp"

Fixed::Fixed( void )
{
	//std::cout << "Default constructor called" << std::endl;
	this->_fixed_num = 0;
}


Fixed::Fixed( const int int_num)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_fixed_num = int_num << _fract_bits;
}

Fixed::Fixed(const float float_num)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_fixed_num = (roundf(float_num * (1 << _fract_bits)));
}

Fixed::Fixed( const Fixed& other )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
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

Fixed& Fixed::operator=(const Fixed& other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixed_num = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& fixed)
{
	COUT << fixed.toFloat();
	return COUT;
}

Fixed Fixed::operator*(const Fixed& other) const 
{
    Fixed result;
    result._fixed_num = (this->_fixed_num * other._fixed_num) >> _fract_bits;
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const 
{
    Fixed result;
    result._fixed_num = (this->_fixed_num / other._fixed_num) >> _fract_bits;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const 
{
    Fixed result;
    result._fixed_num = (this->_fixed_num - other._fixed_num) >> _fract_bits;
    return result;
}

Fixed Fixed::operator+(const Fixed& other) const 
{
    Fixed result;
    result._fixed_num = (this->_fixed_num + other._fixed_num) >> _fract_bits;
    return result;
}


bool Fixed::operator>(const Fixed& other) const
{
	return this->_fixed_num > other._fixed_num;
}

bool Fixed::operator<(const Fixed& other) const
{
	return this->_fixed_num < other._fixed_num;
}

bool Fixed::operator>=(const Fixed& other) const
{
	return this->_fixed_num >= other._fixed_num;
}

bool Fixed::operator<=(const Fixed& other) const
{
	return this->_fixed_num <= other._fixed_num;
}

bool Fixed::operator==(const Fixed& other) const
{
	return this->_fixed_num == other._fixed_num;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return this->_fixed_num != other._fixed_num;
}

Fixed& Fixed::operator++() 
{
    this->_fixed_num += 1;
    return *this;
}


Fixed Fixed::operator++(int) 
{
    Fixed tmp(*this);
    ++(*this); 
    return tmp;
}

Fixed& Fixed::operator--() 
{
    
    this->_fixed_num -= 1;
    return *this;
}


Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    --(*this);
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}
		
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}
		





