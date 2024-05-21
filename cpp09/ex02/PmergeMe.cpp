#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	*this = other;
}

PmergeMe::~PmergeMe() 
{
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{ 
	(void)other;
	return (*this); 
}

template <typename Container>
void PmergeMe::printNumbers(Container& cont)
{
	typedef typename Container::iterator iterator;
	iterator it;

	for (it = cont.begin(); it != cont.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename Container>
int PmergeMe::binarySearch(Container& cont, int key, int low, int high) 
{
	while (low <= high) 
	{
		int mid = low + (high - low) / 2;
		if (cont[mid] == key)
			return mid;
		else if (cont[mid] < key)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return low;
}

template <typename Container>
void PmergeMe::insertSorted(Container& cont, int element) 
{
	int index = binarySearch(cont, element, 0, cont.size() - 1);
	cont.insert(cont.begin() + index, element);
}

template <typename Container>
void	PmergeMe::mergeInsert(Container& cont, Container& left, Container& right)
{
	typedef typename Container::iterator iterator;

	iterator	l_iter = left.begin();
	iterator	r_iter = right.begin();

	while (l_iter != left.end() && r_iter != right.end())
	{
		if (*l_iter < *r_iter)
		{
			cont.push_back(*l_iter);
			++l_iter;
		}
		else
		{
			cont.push_back(*r_iter);
			++r_iter;
		}
	}
	
	for (; l_iter != left.end(); ++l_iter)
	{
		iterator insert_pos = std::lower_bound(cont.begin(), cont.end(), *l_iter);
		cont.insert(insert_pos, *l_iter);
	}
	for (; r_iter != right.end(); ++r_iter)
	{
		iterator insert_pos = std::lower_bound(cont.begin(), cont.end(), *r_iter);
		cont.insert(insert_pos, *r_iter);
	}
}




template <typename Container>
void PmergeMe::startSorting(Container& cont)
{	
	std::vector<std::pair<int, int> > pairs;
	for (size_t i = 0; i < cont.size(); i += 2) 
	{
		if (i + 1 < cont.size())
		    pairs.push_back(std::make_pair(cont[i], cont[i + 1]));
		else
		    pairs.push_back(std::make_pair(cont[i], -1));
	}	

	Container largerElements;
	for (size_t i = 0; i < pairs.size(); ++i) 
	{
		largerElements.push_back(std::max(pairs[i].first, pairs[i].second));
	}

	sort(largerElements.begin(), largerElements.end());

	Container sortedSequence;
	sortedSequence.push_back(std::min(pairs[0].first, pairs[0].second));

	for (size_t i = 0; i < pairs.size(); ++i) 
	{
		if (pairs[i].first != sortedSequence[0])
			insertSorted(sortedSequence, pairs[i].first);
		if (pairs[i].second != sortedSequence[0] && pairs[i].second != -1)
			insertSorted(sortedSequence, pairs[i].second);
	}

	cont.clear();
	for (size_t i = 0; i < sortedSequence.size(); ++i)
		cont.push_back(sortedSequence[i]);
}

bool PmergeMe::validArguments(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < std::strlen(argv[i]); j++)
		{
			bool space = 0;

			if (argv[i][j] == ' ')
			{
				++j;
				space = 1;
			}
			if (!std::isdigit(argv[i][j]))
				return false; 
			if ((space || j == 0) && std::atoi(&argv[i][j]) <= 0)
				return false;
		}
	}
	return true;
}

void PmergeMe::mergeInsertionSort(int argc, char **argv)
{
	int num; 

	if (argc < 3)
	{
		throw ArgumentsNumberException();
	}
	
	else if (!validArguments(argc,argv))
	{
		throw InvalidArgumentException();
	}

	for (int i = 1; i < argc; i++)
	{
		std::istringstream si(argv[i]);
		while (si >> num)
		{
			_vc.push_back(num); 
			_dq.push_back(num);
		}	
	}
	std::cout << "Data before sorting: ";
	printNumbers(_vc);
	clock_t	start_vc = clock();
	startSorting(_vc);
	clock_t end_vc = clock();
	_time_vc = static_cast<double>(end_vc - start_vc) / CLOCKS_PER_SEC * 1000.0; 
	clock_t	start_dq = clock();
	startSorting(_dq);
	clock_t	end_dq = clock();
	_time_dq = static_cast<double>(end_dq - start_dq) / CLOCKS_PER_SEC * 1000.0; 

	std::cout << "Data after sorting: ";
	printNumbers(_vc);
	std::cout << "Time to sort " << _vc.size() << " numbers in std::vector => " << std::fixed <<
	 std::setprecision(5) << _time_vc << " us" << std::endl;
	std::cout << "Time to sort " << _dq.size() << " numbers in std::deque => " << std::fixed <<
	 std::setprecision(5) << _time_dq << " us" << std::endl;
}


const char* PmergeMe::ArgumentsNumberException::what() const throw()
{
	return ("Not enough arguments (must be at least 2 numbers)");
}

const char*	PmergeMe::InvalidArgumentException::what() const throw()
{
	return ("Invalid argument");
}
