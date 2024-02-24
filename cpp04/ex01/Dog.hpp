#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		void makeSound( void ) const;
		~Dog( void );
	private:
		Brain* _brain;
	Dog& operator=( const Dog& other )
	{
		if (this != &other)
		{
			this->_type = other._type; 
			this->_brain = new Brain(*other._brain);
		}
		return *this;
	}
};

#endif
