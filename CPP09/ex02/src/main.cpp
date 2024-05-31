#include <cstdlib>
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

template <typename container>
void PmergeMe(int argc, char **argv)
{
	container c;
	for (int i = 0; i < argc; ++i)
	{
		c.push_back(atoi(argv[i]));
	}
	sort(c);
}

int	main(int argc, char **argv)
{
	std::list<int> list;
	for (int i = 1; i < argc; ++i)
		list.push_back(atoi(argv[i]));


	std::list<int>::iterator it = list.begin();
	while (it != list.end())
		std::cout << *(it++) << " ";
	std::cout << std::endl;

	sort(list);

	it = list.begin();
	while (it != list.end())
		std::cout << *(it++) << " ";
	std::cout << std::endl;

}
	// Create int container(s) using string inputs
	// How to keep track of time
	// sort the comtainers ig
	// 	Ford johnson algorithm
	//		-split list in 2
	//			-recursively until all lists are size 1
	//		for each list, put them back in the prev list in order
	//			-recursively until ony 1 (sorted) list remains
	//
	//TODO: add some error checking to input
	//	- is number
	//	- at least one element
	//	- no dups
	//TODO: add times
