#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
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
