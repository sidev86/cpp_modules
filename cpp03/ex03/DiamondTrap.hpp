#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap 
{
	public:
		DiamondTrap( std::string name ); 
		~DiamondTrap( void );
		using ScavTrap::attack;
		
		void whoAmI( void );
		
	private:
		std::string _name;	
};

#endif
