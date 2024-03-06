#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	this->_type = "AAnimal";
	std::cout << "Default constructor (AAnimal) called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : _type(other._type)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

std::string AAnimal::getType(void) const
{
	return this->_type;
}

void AAnimal::makeSound(void) const
{
	std::cout << "AAnimal sound" << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal& other )
{
	if (this != &other)
		this->_type = other._type; 
	return *this;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}
