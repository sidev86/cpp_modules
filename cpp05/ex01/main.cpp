#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 5);
        std::cout << bob << std::endl;

        bob.incrementGrade();
        std::cout << bob << std::endl;

        bob.decrementGrade();
        std::cout << bob << std::endl;

        // Trying to create a bureaucrat with invalid grade
        Bureaucrat alice("Alice", 150);
        std::cout << alice << std::endl;
        
        alice.decrementGrade();
        std::cout << alice << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
