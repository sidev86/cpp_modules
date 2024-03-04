#include "AMateria.hpp"


AMateria::AMateria(void)
{
	std::cout << "Default constructor (materia)" << std::endl;
}

AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria constructor" << std::endl;
}

std::string const & getType() const
{
	return this->_type;
}

AMateria* AMateria::clone() const
{
	return *this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Using " << this->_type << "on " << target.getName() << std::endl;

}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor" << std::endl;
}

