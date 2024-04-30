#include "ClassHeaders/MutantStack.hpp"
#include <iostream>
int main(void)
{
	std::stack<int> stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	std::cout << stack.top() << std::endl;
	stack.pop();
	std::cout << stack.top() << std::endl;

	MutantStack<int> m;
	m.push(1);

}
