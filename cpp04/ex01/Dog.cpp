#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default constructor (dog) called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woooof Wooofff" << std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
	if (this != &other)
	{
		this->_type = other._type; 
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor (dog) called" << std::endl;
	delete this->_brain;
}




