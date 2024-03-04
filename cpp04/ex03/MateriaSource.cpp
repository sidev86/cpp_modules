#include "MateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
	private:
		AMateria* templates[4];
		int count;

	public:
	
	MateriaSource() : count(0)
	{
		for (int i = 0; i < 4; ++i)
			templates[i] = nullptr;
	}
	
	~MateriaSource() 
	{
		for (int i = 0; i < count; ++i)
			delete templates[i];
	}
	void learnMateria(AMateria* m) override {
		if (count < 4) {
		    templates[count++] = m->clone();
		}
	}
	
	AMateria* createMateria(std::string const & type) override 
	{
		for (int i = 0; i < count; ++i) 
		{
			if (templates[i]->getType() == type) {
			return templates[i]->clone();
		}
	}
	return nullptr;
	}
};
