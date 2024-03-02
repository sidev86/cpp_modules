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
		
	Cat& operator=( const Cat& other );
};

#endif
