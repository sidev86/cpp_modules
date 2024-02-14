#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		
		void setName(std::string name);
		void announce(void);
		
	private:
		std::string _name;
};

Zombie *zombieHorde(int n, std::string name);

#endif
