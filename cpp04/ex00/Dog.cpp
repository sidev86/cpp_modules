#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Default constructor (dog) called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woooof Wooofff" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor (dog) called" << std::endl;
}




