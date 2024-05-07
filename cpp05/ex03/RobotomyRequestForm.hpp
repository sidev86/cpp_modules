#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
private:
    std::string _target;

public:
    RobotomyRequestForm(const std::string &target);
    virtual void execute() const;
};

#endif
