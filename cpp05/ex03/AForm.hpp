#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name; 
		bool	_signed;
		const int _sign_grade; 
		const int _exec_grade;
		
	public:
		AForm( void );
		AForm(const std::string &name, int sign_grade, int exec_grade);
		AForm(const AForm& other);
		virtual ~AForm();
		const std::string& getAFormName() const;
		int getAFormSignGrade() const; 
		int getAFormExecGrade() const;
		bool getAFormSignCheck() const; 
		void beSigned(const Bureaucrat &bureacrat);
		virtual void execute() const = 0;
		void execute(Bureaucrat const & executor) const;
		
		AForm& operator=(const AForm& other); 
	
	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};	
};

std::ostream& operator<<(std::ostream &out, const AForm &form); 

#endif
