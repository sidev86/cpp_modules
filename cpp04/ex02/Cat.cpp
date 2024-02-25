#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default constructor (cat) called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meeeoooooowwwwwww" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor (cat) called" << std::endl;
	delete this->_brain;
}
