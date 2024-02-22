#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap( std::string name ); 
		ClapTrap( const ClapTrap& other );
		~ClapTrap( void );
		void attack( const std::string& target );  
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
		void setDamage(const int damage);
		int getDamage( void );
		int getHealthPoints( void );
		int getEnergyPoints( void );
		std::string getName( void );
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
