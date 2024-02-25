#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat( void );
		void makeSound( void ) const;	
		~Cat( void );
	private:
		Brain* _brain;
		
	Cat& operator=( const Cat& other )
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
