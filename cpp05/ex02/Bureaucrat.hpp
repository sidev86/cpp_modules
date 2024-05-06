#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name; 
		int _grade; 

	public: 
		Bureaucrat( void );
		Bureaucrat(const std::string& name, int grade); 
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();
		
		const std::string getName() const;
		int getGrade() const;
		
		void incrementGrade(); 
		void decrementGrade();
		void signForm(AForm& form);
		void executeForm(AForm const & form);
		
		Bureaucrat& operator=(const Bureaucrat& other);
		
		class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
		};	
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat); 


#endif
