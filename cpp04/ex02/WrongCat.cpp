#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "Default constructor (wrongcat) called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meeeoooooowwwwwww" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor (wrongcat) called" << std::endl;
}
