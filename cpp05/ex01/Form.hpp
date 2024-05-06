#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name; 
		bool	_signed;
		const int _sign_grade; 
		const int _execute_grade;
		
	public:
		Form( void );
		Form(const std::string &name, const int &sign_grade, const int &exec_grade);
		Form(const Form& other);
		~Form();
		const std::string& getFormName();
		bool& getFormSignCheck(); 
		const int& getFormSignGrade(); 
		const int& getFormExecGrade();
		bool& beSigned(const Bureaucrat &bureacrat);
	
	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};	
};

std::ostream& operator<<(std::ostream &out, const Form &form); 

#endif
