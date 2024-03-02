#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public: 
		Animal( void );
		Animal( const Animal& other );
		virtual void makeSound( void ) const;
		std::string getType( void ) const;
		virtual ~Animal( void );
	protected:
		std::string _type;
			
	Animal& operator=( const Animal& other );
};

#endif
