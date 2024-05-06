#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 72, 45), _target(target) 
{

}

void RobotomyRequestForm::execute() const 
{
    std::cout << "Making drilling noises..." << std::endl;
    if (rand() % 2 == 0) 
    {
        std::cout << _target << " has been robotomized successfully" << std::endl;
    } 
    else 
    {
        std::cout << "Robotomy failed for " << _target << std::endl;
    }
}
