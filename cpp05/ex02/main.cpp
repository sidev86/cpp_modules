#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        // Creazione di un Bureaucrat
        Bureaucrat bureaucrat("John", 50);
        std::cout << "Bureaucrat: " << bureaucrat << std::endl;

        // Creazione di un ShrubberyCreationForm
        ShrubberyCreationForm shrubberyForm("home");
        std::cout << "Shrubbery Creation Form: " << shrubberyForm.getAFormName() << std::endl;

        // Creazione di un RobotomyRequestForm
        RobotomyRequestForm robotomyForm("target");
        std::cout << "Robotomy Request Form: " << robotomyForm.getAFormName() << std::endl;

        // Creazione di un PresidentialPardonForm
        PresidentialPardonForm pardonForm("criminal");
        std::cout << "Presidential Pardon Form: " << pardonForm.getAFormName() << std::endl;

        // Test di firma e esecuzione di ShrubberyCreationForm
        bureaucrat.signForm(shrubberyForm);
        bureaucrat.executeForm(shrubberyForm);

        // Test di firma e esecuzione di RobotomyRequestForm
        bureaucrat.signForm(robotomyForm);
        bureaucrat.executeForm(robotomyForm);

        // Test di firma e esecuzione di PresidentialPardonForm
        bureaucrat.signForm(pardonForm);
        bureaucrat.executeForm(pardonForm);

    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
