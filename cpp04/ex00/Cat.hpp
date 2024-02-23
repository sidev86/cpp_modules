#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		void makeSound( void ) const;	
		~Cat( void );
};

#endif
