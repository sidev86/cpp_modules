#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog( void );
		Dog( const Dog& other );
		void makeSound( void ) const;
		~Dog( void );
		Dog& operator=( const Dog& other );
	private:
		Brain* _brain;
};

#endif
