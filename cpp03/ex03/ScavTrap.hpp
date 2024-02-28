#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( const std::string& _name );
		
		void guardGate( void );
		~ScavTrap( void ); 
};

#endif
