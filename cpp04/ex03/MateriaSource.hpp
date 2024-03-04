#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "MateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* templates[4];
		int count;

	public:
		MateriaSource();
		~MateriaSource();

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif
