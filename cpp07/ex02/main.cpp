#include "Array.hpp" 

int main() 
{
	// COSTRUTTORE DEFAULT (ARRAY VUOTO)
	Array<int> emptyArray;
	std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

	// ARRAY DI INTERI
	Array<int> intArray(5);
	for (unsigned int i = 0; i < intArray.size(); ++i) 
	{
		intArray[i] = i + 1;
	}
	std::cout << "Size of intArray: " << intArray.size() << std::endl;
	std::cout << "Contents of intArray: ";
	for (unsigned int i = 0; i < intArray.size(); ++i) 
	{
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;
	
	// ARRAY DI FLOAT
	Array<float> floatArray(5);
	for (unsigned int i = 0; i < floatArray.size(); ++i) 
	{
		floatArray[i] = (i + 1) * 0.2f;
	}
	std::cout << "Size of floatArray: " << floatArray.size() << std::endl;
	std::cout << "Contents of floatArray: ";
	for (unsigned int i = 0; i < floatArray.size(); ++i) 
	{
		std::cout << floatArray[i] << " ";
	}
	std::cout << std::endl;

	// TEST COSTRUTTORE COPIA
	Array<int> copiedArray(intArray);
	std::cout << "Size of copiedArray: " << copiedArray.size() << std::endl;
	std::cout << "Contents of copiedArray: ";
	// MODIFICO VALORE DI ARRAY COPIA
	//copiedArray[0] = 100;
	for (unsigned int i = 0; i < copiedArray.size(); ++i) 
	{
		std::cout << copiedArray[i] << " ";
	}
	std::cout << std::endl;

	// TEST OPERATORE DI ASSEGNAZIONE
	Array<int> assignedArray;
	assignedArray = intArray;
	std::cout << "Size of assignedArray: " << assignedArray.size() << std::endl;
	std::cout << "Contents of assignedArray: ";
	for (unsigned int i = 0; i < assignedArray.size(); ++i) 
	{
		std::cout << assignedArray[i] << " ";
	}
	std::cout << std::endl;

	// TEST PER GESTIONE EXCEPTION
	try 
	{
		std::cout << "Trying to access an out-of-range element: " << intArray[intArray.size()] << std::endl;
	} 
	catch (const std::out_of_range& e) 
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
