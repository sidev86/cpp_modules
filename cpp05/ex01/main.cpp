#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        // Creazione di un Bureaucrat e di un Form
        Bureaucrat bureaucrat("John", 81);
        Form form("Tax Form", 80, 80);

        // Test dei metodi di Bureaucrat
        std::cout << "Bureaucrat: " << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << "After increment: " << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << "After decrement: " << bureaucrat << std::endl;

        // Test del metodo di firma di Form
        std::cout << "Form before signing: " << form << std::endl;
        bureaucrat.signForm(form);
        std::cout << "Form after signing: " << form << std::endl;

        // Test eccezione GradeTooLowException
        Bureaucrat bureaucrat2("Bob", 140);
        std::cout << "Bureaucrat2: " << bureaucrat2 << std::endl;
        bureaucrat2.incrementGrade(); // Questo dovrebbe lanciare un'eccezione GradeTooHighException

    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
