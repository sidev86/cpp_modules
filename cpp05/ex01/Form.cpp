#include "Form.hpp"

Form::Form(void) 
{

}

Form::Form(const std::string &name, const int &sign_grade, const int &exec_grade) 
{
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
	this->_sign_grade = sign_grade;
	this->_exec_grade = exec_grade;
	this->_name = name; 
	this->_signed = false;
}

Form::Form(const Form& other)
{
	*this = other;
}

const std::string& Form::getFormName()
{
	return this->_name;
}

bool& Form::getFormSignCheck()
{
	return this->_signed;
}
		
const int& Form::getFormSignGrade()
{
	return this->_sign_grade;
}
		
const int& getFormExecGrade()
{
	return this->_exec_grade;
}
		
bool& beSigned(Bureaucrat &bureacrat)
{
	if (bureaucrat.getGrade() <= this->_sign_grade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

Form::~Form() 
{


}

const char* Form::GradeTooHighException::what() const throw() 
{
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() 
{
    return "Grade is too low!";
}

Form& Form::operator=(const Form& other) 
{
	if (this != &other) 
	{
		this->_name = other.getFormName();
		this->_signed = other.getFormSignCheck();
		this->_sign_grade = other.getFormSignGrade();
		this->_exec_grade = other.getFormExecGrade();
	}
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Form &form) {
    out << "Form informations:\n Name: " << form.getFormName() << "\nSigned:  " << form.getFormSignCheck() << "\nSign grade: " << form.getFormSignGrade() << "\nExecution grade: " << form.getFormExecGrade() << std:endl;
    return out;
}
