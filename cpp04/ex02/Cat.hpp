#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat( void );
		Cat ( const Cat& other );
		void makeSound( void ) const;	
		~Cat( void );
		Cat& operator=( const Cat& other );
	private:
		Brain* _brain;
};

#endif
