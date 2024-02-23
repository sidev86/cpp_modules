#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public: 
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& other );
		void makeSound( void ) const;
		std::string getType( void ) const;
		~WrongAnimal( void );
	protected:
		std::string _type;
	
	WrongAnimal& operator=( const WrongAnimal& other )
	{
		if (this != &other)
			*this = other; 
		return *this;
	}
};

#endif
