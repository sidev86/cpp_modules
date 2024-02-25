#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor (brain) called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Copy constructor (brain) called" << std::endl;
	*this = other;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}
