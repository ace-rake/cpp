
#include <algorithm>
#include <list>
#include <vector>
#include <iostream>

template<typename T>
typename T::iterator 	easyfind(T& t, int i)
{
	typename T::iterator it = std::find(t.begin(), t.end(), i);
	if (it != t.end())
		return it;
	else
		return --it;
}

int	main(void)
{
	std::vector<int> vect;
	vect.push_back(10);
	vect.push_back(20);
	vect.push_back(30);

	std::vector<int>::iterator retval = easyfind(vect, 24);
	std::cout << *retval.base() << std::endl;
	std::list<int> list;
	list.push_back(10);
	list.push_back(11);
	list.push_back(12);
	list.push_back(13);
	list.push_back(999);
	std::list<int>::iterator retval2 = easyfind(list, 16);
	std::cout << *retval2 << std::endl;
}
