/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:11:03 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:11:05 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("none"), _signed(false), _sign_grade(150), _exec_grade(150)
{

}

Form::Form(const std::string &name, int sign_grade, int exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	this->_signed = false;
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();	
}

Form::Form(const Form& other) : _name(other.getFormName()), _signed(false), _sign_grade(other.getFormSignGrade()), _exec_grade(other.getFormExecGrade())
{
}

const std::string& Form::getFormName() const
{
	return this->_name;
}

bool Form::getFormSignCheck() const
{
	return this->_signed;
}
		
int Form::getFormSignGrade() const
{
	return this->_sign_grade;
}
		
int Form::getFormExecGrade() const
{
	return this->_exec_grade;
}
		
void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_sign_grade)
		this->_signed = true;
	else
		throw GradeTooLowException();
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
		this->_signed = other.getFormSignCheck();
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Form &form) {
    out << "\nName: " << form.getFormName() << "\nSigned:  " << form.getFormSignCheck() << "\nSign grade: " << form.getFormSignGrade() << "\nExecution grade: " << form.getFormExecGrade() << std::endl;
    return out;
}
