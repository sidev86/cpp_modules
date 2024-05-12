#include "iter.hpp"

template <typename T>
void printElement(const T& element) 
{
	std::cout << element << " ";
}


int main() 
{
	int intArray[] = {1, 2, 3, 4, 5};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	const std::string stringArray[] = {"pippo", "pluto"};
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

	// Utilizzo di iter con la funzione di callback printElement
	std::cout << "Printing intArray: ";
	iter(intArray, 5, printElement<int>);
	std::cout << std::endl;

	std::cout << "Printing stringArray: ";
	iter(stringArray, 2, printElement<std::string>);
	std::cout << std::endl;

	std::cout << "Printing charArray: ";
	iter(charArray, 5, printElement<char>);
	std::cout << std::endl;

	std::cout << "Printing doubleArray: ";
	iter(doubleArray, 5, printElement<double>);
	std::cout << std::endl;

	return 0;
}
