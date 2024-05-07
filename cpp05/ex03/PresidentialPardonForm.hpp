#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
private:
    std::string _target;

public:
    PresidentialPardonForm(const std::string &target);
    virtual void execute() const;
};

#endif
