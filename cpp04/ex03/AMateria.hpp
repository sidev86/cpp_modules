#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0; //pure member function
		virtual void use(ICharacter& target);
};

#endif
