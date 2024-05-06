#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form", 25, 5), _target(target) 
{
}

void PresidentialPardonForm::execute() const 
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
