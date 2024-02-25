#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public: 
		Brain( void );
		Brain( const Brain& other );
		~Brain( void );
		Brain& operator=( const Brain& other )
		{
			std::cout << "Brain assignment copy called" << std::endl;
			if (this != &other)
			{
				for (int i = 0; i < 100; i++)
					this->_ideas[i] = other._ideas[i];
			}
			return *this;
		}
	private:
		std::string _ideas[100];
};

#endif
