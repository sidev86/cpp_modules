#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm 
{
	private:
	    std::string _target;

	public:
	    ShrubberyCreationForm( void );
	    ShrubberyCreationForm(const ShrubberyCreationForm& other);
	    ShrubberyCreationForm(const std::string &target);
	    ~ShrubberyCreationForm();
	    
	    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	    virtual void execute() const;
};

#endif
