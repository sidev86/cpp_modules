#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public: 
		Brain( void );
		Brain( const Brain& other );
		~Brain( void );
		Brain& operator=( const Brain& other );
		
	private:
		std::string _ideas[100];
};

#endif
