/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:08:35 by sibrahim          #+#    #+#             */
/*   Updated: 2024/05/08 11:08:36 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

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
		
		const std::string& getName() const;
		int getGrade() const;
		
		void incrementGrade(); 
		void decrementGrade();
		
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
