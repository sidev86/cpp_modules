#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( const std::string& _name );
		
		void highFivesGuys( void );
		~FragTrap( void ); 
};

#endif
