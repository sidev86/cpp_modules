#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( const std::string& _name );
		
		void guardGate( void );
		~ScavTrap( void ); 



};

#endif
