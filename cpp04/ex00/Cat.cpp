#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout << "Default constructor (cat) called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meeeoooooowwwwwww" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor (cat) called" << std::endl;
}
