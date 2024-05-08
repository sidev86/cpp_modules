#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("none"), _grade(150) 
{	
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) 
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) 
{
}

Bureaucrat::~Bureaucrat() 
{
}

const std::string Bureaucrat::getName() const 
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
		throw GradeTooHighException();
	this->_grade--;
}


void Bureaucrat::decrementGrade() 
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}


void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getAFormName() << std::endl;
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cout << getName() << " couldn't sign " << form.getAFormName() << " because " << e.what() << std::endl;
	
	}
}

void Bureaucrat::executeForm(AForm const & form) 
{
	try 
	{
		form.execute();
		std::cout << _name << " executed " << form.getAFormName() << std::endl;
	} 
	catch (const std::exception& e) 
	{
		std::cerr << _name << " couldn't execute " << form.getAFormName() << " because " << e.what() << std::endl;
	}
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


