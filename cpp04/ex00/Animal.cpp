#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type = "Animal";
	std::cout << "Default constructor (Animal) called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

void Animal::makeSound(void) const
{
	std::cout << "Generic Animal sound" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}
