#ifndef CHARACTER_HPP
# define CHARACTER_HPP


class Character : public ICharacter 
{
	private:
		std::string _name;
		AMateria* _inventory[4];

	public:
		Character(const std::string &name);
		~Character();
		std::string const& getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);		
};

#endif
