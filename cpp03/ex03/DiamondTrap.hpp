#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>

class DiamondTrap
{
	public:
		DiamondTrap( std::string name ); 
		DiamondTrap( const ClapTrap& other );
		~DiamondTrap( void );
		
		ClapTrap& operator=( const ClapTrap& other )
		{
			if (this != &other)
				*this = other; 
			return *this;
		}
	
	
	protected:
		std::string _name;
		int _hp;
		int _ep;
		int _damage;
	
};

#endif
