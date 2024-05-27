#include "ClassHeaders/MutantStack.hpp"
#include <iostream>
#include <list>
int main(void)
{
	{
		MutantStack<int> m;
		m.push(1);
		m.push(2);
		m.push(123);
		m.push(987);
		m.push(456);
		m.push(0);

		MutantStack<int>::iterator i = m.begin();
		MutantStack<int>::iterator ie = m.end();

		while (i != ie)
		{
			std::cout << *i << std::endl;
			i++;
		}

		MutantStack<int> copy(m);
		i = copy.begin();
		ie = copy.end();
		while (i != ie)
		{
			std::cout << *i << std::endl;
			i++;
		}

		MutantStack<int> assign = m;
		i = assign.begin();
		ie = assign.end();
		while (i != ie)
		{
			std::cout << *i << std::endl;
			i++;
		}
	}
	{
		std::list<int> m;
		m.push_back(1);
		m.push_back(2);
		m.push_back(123);
		m.push_back(987);
		m.push_back(456);
		m.push_back(0);
		std::list<int>::iterator i = m.begin();
		std::list<int>::iterator ie = m.end();

		while (i != ie)
		{
			std::cout << *i << std::endl;
			i++;
		}

		std::list<int> copy(m);
		i = copy.begin();
		ie = copy.end();
		while (i != ie)
		{
			std::cout << *i << std::endl;
			i++;
		}

		std::list<int> assign = m;
		i = assign.begin();
		ie = assign.end();
		while (i != ie)
		{
			std::cout << *i << std::endl;
			i++;
		}
	}
}

/* int main() */
/* { */
/* 	MutantStack<int> mstack; */
/* 	mstack.push(5); */
/* 	mstack.push(17); */
/* 	std::cout << mstack.top() << std::endl; */
/* 	mstack.pop(); */
/* 	std::cout << mstack.size() << std::endl; */
/* 	mstack.push(3); */
/* 	mstack.push(5); */
/* 	mstack.push(737); */
/* 	//[...] */
/* 	mstack.push(0); */
/* 	MutantStack<int>::iterator it = mstack.begin(); */
/* 	MutantStack<int>::iterator ite = mstack.end(); */
/* 	++it; */
/* 	--it; */
/* 	while (it != ite) */
/* 	{ */
/* 		std::cout << *it << std::endl; */
/* 		++it; */
/* 	} */
/* 	std::stack<int> s(mstack); */
/* 	return 0; */
/* } */
