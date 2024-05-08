/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:10:46 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:10:48 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;

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
		void signForm(Form& form);
		
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
