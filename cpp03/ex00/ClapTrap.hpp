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
		ClapTrap& operator=( const ClapTrap& other );
		
	
	
	private:
		std::string _name;
		int _hp;
		unsigned int _ep;
		unsigned int _damage;
	
};

#endif
