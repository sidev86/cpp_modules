#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( const std::string& _name );
		//ScavTrap(ScavTrap& other);
		
		void guardGate( void );
		~ScavTrap( void ); 
};

#endif
