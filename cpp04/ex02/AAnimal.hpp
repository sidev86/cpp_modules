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
		AAnimal& operator=( const AAnimal& other );
	protected:
		std::string _type;
};

#endif
