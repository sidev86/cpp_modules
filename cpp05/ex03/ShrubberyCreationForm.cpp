#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), _target("none") 
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137), _target(target) 
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("Shrubbery Creation Form", 145, 137)
{
	this->_target = other._target;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) 
{
	if (this != &other) 
	{
		this->_target = other._target;
	}
	return *this;
}


ShrubberyCreationForm:: ~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute() const 
{
	std::ofstream file;
	std::string fname = this->_target +"_shrubbery";	
	file.open(fname.c_str());
	if (!file) 
	{
		std::cerr << "can't open/create" << this->_target + "_shrubbery" << std::endl;
		return ;
	}
	file <<
	"            # #### ####\n"
	"        ### \\/#|### |/####\n"
	"        ##\\/#/ \\||/##/_/##/_#\n"
	"       ###  \\/###|/ \\/ # ###\n"
	"    ##_\\_#\\_\\## | #/###_/_####\n"
	"    ## #### # \\ #| /  #### ##/##\n"
	"    __#_--###`  |{,###---###-~\n"
	"                \\ }{\n"
	"                }}{\n"
	"                }}{\n"
	"                {{}\n"
	"        , -=-~{ .-^- _\n"
	"                `}\n"
	"                 {"
	<< std::endl; 			
}

      

