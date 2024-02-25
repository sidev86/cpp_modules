#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default constructor (dog) called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woooof Wooofff" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor (dog) called" << std::endl;
	delete this->_brain;
}




