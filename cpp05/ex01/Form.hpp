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
		const int _exec_grade;
		
	public:
		Form( void );
		Form(const std::string &name, int sign_grade, int exec_grade);
		//Form(const Form& other);
		~Form();
		const std::string& getFormName() const;
		int getFormSignGrade() const; 
		int getFormExecGrade() const;
		bool getFormSignCheck() const; 
		
		void beSigned(const Bureaucrat &bureacrat);
		
		Form& operator=(const Form& other); 
	
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
