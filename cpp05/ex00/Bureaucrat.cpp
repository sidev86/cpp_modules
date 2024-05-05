#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("none"), _grade(150) 
{
	std::cout << "Default Constructor called" << std::endl;
}


Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) 
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat& other) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const 
{
	return this->_name;
}

int Bureaucrat::getGrade() const 
{
	return this->_grade;
}

void Bureaucrat::incrementGrade() 
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}


void Bureaucrat::decrementGrade() 
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
    return "Grade is too low!";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) 
{
	if (this != &other) 
	{
		this->_grade = other.getGrade();
	}
	return *this;
}


// Overloading insertion operator
std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}

