#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	WrongAnimal::_type = "WrongCat";
	std::cout << "Default constructor (wrongcat) called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meeeoooooowwwwwww" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor (wrongcat) called" << std::endl;
}
