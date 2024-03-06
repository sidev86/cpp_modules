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
		virtual ~WrongAnimal( void );
		WrongAnimal& operator=( const WrongAnimal& other );
	protected:
		std::string _type;	
};

#endif
