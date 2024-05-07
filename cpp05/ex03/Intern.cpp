#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() 
{
 
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target) 
{
	std::string formNames[] = {"Robotomy Request", "Presidential Pardon", "Shrubbery Creation"};
	AForm*    forms[] = {
	new RobotomyRequestForm( target ),
	new PresidentialPardonForm( target ),
	new ShrubberyCreationForm( target )
	};

	for ( int i(0); i < 3; i++ ) 
	{
		if ( formName == formNames[i] ) 
		{
		    std::cout << "Intern creates " << formName << std::endl;
		    return forms[i];
		}
	}
	std::cout << "Intern cannot create " << formName << " form" << std::endl;
	return NULL;
}

Intern::~Intern()
{
}
