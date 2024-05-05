#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 5);
        Bureaucrat p;
        std::cout << bob << std::endl;
        std::cout << p << std::endl;

        bob.incrementGrade();
        std::cout << bob << std::endl;

        bob.decrementGrade();
        std::cout << bob << std::endl;

        // Trying to create a bureaucrat with invalid grade
        Bureaucrat alice("Alice", 1);
        std::cout << alice << std::endl;
        
        alice.incrementGrade();
        std::cout << alice << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
