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

Brain& Brain::operator=( const Brain& other )
{
	std::cout << "Brain assignment copy called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}
