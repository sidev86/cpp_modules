#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137), _target(target) 
{

}

void ShrubberyCreationForm::execute() const 
{
    FILE *file = fopen((_target + "_shrubbery").c_str(), "w");
    if (file != NULL) 
    {
        fprintf(file, "ASCII trees\n");
        fclose(file);
    } 
    else 
    {
        throw std::runtime_error("Unable to open file");
    }
}
