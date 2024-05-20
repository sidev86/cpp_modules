#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe nums;
	try
	{
		nums.mergeInsertionSort(argc, argv);
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}


}
