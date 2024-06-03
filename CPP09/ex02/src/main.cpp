#include <cctype>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <iostream>
#include <list>

template <typename container>
void	merge(container & original, container left, container right)
{
	while (!left.empty() || !right.empty())
	{
		if (left.empty())
		{
			while (!right.empty())
			{
				original.push_back(right.front());
				right.pop_front();
			}
			break;
		}
		if (right.empty())
		{
			while (!left.empty())
			{
				original.push_back(left.front());
				left.pop_front();
			}
			break;
		}
		int leftVal = left.front();
		int rightVal = right.front();
		if (leftVal < rightVal)
		{
			original.push_back(left.front());
			left.pop_front();
			continue;
		}
		original.push_back(right.front());
		right.pop_front();
	}

}

template <typename container>
void	split(container & original, container & left, container & right)
{
	size_t n = original.size();
	
	while (original.size() > n / 2)
	{
		left.push_back(original.front());
		original.pop_front();
	}

	while (!original.empty())
	{
		right.push_back(original.front());
		original.pop_front();
	}
}

template <typename container>
void	sort(container & original)
{
	size_t n = original.size();
	if (n == 1)
		return ;
	//split left
	container left;

	//split right
	container right;

	split(original, left, right);

	//Recurse call this on left and right
	sort(left);
	sort(right);

	// Somehow remerge left and right into original
	merge(original, left, right);

}

bool numCheck(int argc, char **argv)
{
	std::list<int> seen;
	for (int i = 1; i < argc; i++)
	{
		std::string str(argv[i]);
		for (std::string::iterator it = str.begin(); it != str.end(); it++)
		{
			if (it == str.begin() && *it == '+')
				continue ;
			if (!isdigit(*it))
				return true;
		}
		
		int why_cant_i_use_set = atoi(argv[i]);
		for (std::list<int>::iterator fuck_cpp_98 = seen.begin();fuck_cpp_98 != seen.end();fuck_cpp_98++)
			if (*fuck_cpp_98 == why_cant_i_use_set)
				return true;
		seen.push_back(why_cant_i_use_set);
	}
	return false;
}

int	main(int argc, char **argv)
{
	if (argc == 1 || numCheck(argc, argv))
	{
		std::cout << "Invalid Args\n";
		return 1;
	}
	size_t list_size = argc - 1;

	//create deque
	std::deque<int> deque;
	for (int i = 1; i < argc; ++i)
		deque.push_back(atoi(argv[i]));

	//create list
	std::list<int> list;
	for (int i = 1; i < argc; ++i)
		list.push_back(atoi(argv[i]));

	// Sort the containers
	clock_t start_list = clock();
	sort(list);
	clock_t end_list = clock();
	clock_t start_deque = clock();
	sort(deque);
	clock_t end_deque = clock();
	double elapsed_list = static_cast<double>(end_list - start_list) / CLOCKS_PER_SEC * 1000000;
	double elapsed_deque = static_cast<double>(end_deque - start_deque) / CLOCKS_PER_SEC * 1000000;


	std::cout << "Before:\t";
	for (int i = 1; i < argc; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;

	std::list<int>::iterator it = list.begin();
	std::cout << "After:\t";
	while (it != list.end())
		std::cout << *(it++) << " ";
	std::cout << std::endl;

	std::cout << "Elapsed time deque for size [" << list_size << "] : " << elapsed_deque << "µ" << std::endl;
	std::cout << "Elapsed time list  for size [" << list_size << "] : " << elapsed_list << "µ" << std::endl;
}
