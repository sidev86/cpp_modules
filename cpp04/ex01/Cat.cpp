#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default constructor (cat) called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meeeoooooowwwwwww" << std::endl;
}

Cat& Cat::operator=( const Cat& other )
{
	if (this != &other)
	{
		this->_type = other._type; 
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor (cat) called" << std::endl;
	delete this->_brain;
}
