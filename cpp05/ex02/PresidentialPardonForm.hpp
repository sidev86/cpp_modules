#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		virtual void execute() const;
};

#endif
