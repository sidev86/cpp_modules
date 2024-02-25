#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal
{
	public: 
		AAnimal( void );
		AAnimal( const AAnimal& other );
		virtual void makeSound( void ) const = 0;
		std::string getType( void ) const;
		virtual ~AAnimal( void );
	protected:
		std::string _type;
	
	AAnimal& operator=( const AAnimal& other )
	{
		if (this != &other)
			*this = other; 
		return *this;
	}
};

#endif
