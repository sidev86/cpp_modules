#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	WrongAnimal::_type = "WrongCat";
	std::cout << "Default constructor (wrongcat) called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meeeoooooowwwwwww" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor (wrongcat) called" << std::endl;
}
