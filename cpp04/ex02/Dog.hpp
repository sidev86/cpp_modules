#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog( void );
		void makeSound( void ) const;
		~Dog( void );
	private:
		Brain* _brain;
	Dog& operator=( const Dog& other );
};

#endif
