#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		void makeSound( void ) const;
		~Dog( void );
};

#endif
