#include "AForm.hpp"

AForm::AForm(void) : _name("none"), _sign_grade(150), _exec_grade(150)
{

}

AForm::AForm(const std::string &name, int sign_grade, int exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	//this->_sign_grade = sign_grade;
	//this->_exec_grade = exec_grade;
	//this->_name = name; 
	this->_signed = false;
	if (sign_grade < 1 || exec_grade < 1)
		throw AForm::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw AForm::GradeTooLowException();
	
}

/*AForm::AForm(const Form& other)
{
	*this = other;
}*/

const std::string& AForm::getAFormName() const
{
	return this->_name;
}

bool AForm::getAFormSignCheck() const
{
	return this->_signed;
}
		
int AForm::getAFormSignGrade() const
{
	return this->_sign_grade;
}
		
int AForm::getAFormExecGrade() const
{
	return this->_exec_grade;
}
		
void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_sign_grade)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const {
    if (!this->_signed) {
        throw std::runtime_error("Form not signed");
    }

    if (executor.getGrade() > this->_exec_grade) {
        throw GradeTooLowException();
    }

    execute(); // Chiamata al metodo virtuale puro
}

AForm::~AForm() 
{


}

const char* AForm::GradeTooHighException::what() const throw() 
{
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() 
{
    return "Grade is too low!";
}

AForm& AForm::operator=(const AForm& other) 
{
	if (this != &other) 
	{
		this->_signed = other.getAFormSignCheck();
	}
	return *this;
}

std::ostream& operator<<(std::ostream &out, const AForm &form) {
    out << "Form informations:\nName: " << form.getAFormName() << "\nSigned:  " << form.getAFormSignCheck() << "\nSign grade: " << form.getAFormSignGrade() << "\nExecution grade: " << form.getAFormExecGrade() << std::endl;
    return out;
}
