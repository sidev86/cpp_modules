#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( const std::string& _name );
		
		void attack(const std::string& target);
		void highFivesGuys( void );
		~FragTrap( void ); 
};

#endif
