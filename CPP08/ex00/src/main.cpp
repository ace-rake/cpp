
#include <algorithm>
#include <list>
#include <vector>
#include <iostream>

template<typename T>
bool 	easyfind(T t, int i)
{
	if (std::find(t.begin(), t.end(), i) != t.end())
		return true;
	return false;
}

int	main(void)
{
	std::vector<int> vect;
	vect.push_back(10);
	vect.push_back(20);
	vect.push_back(30);

	bool retval = easyfind(vect, 24);
	std::cout << retval << std::endl;
	std::list<int> list;
	list.push_back(10);
	list.push_back(11);
	list.push_back(12);
	list.push_back(13);
	list.push_back(14);
	retval = easyfind(list, 16);
	std::cout << retval << std::endl;
}
