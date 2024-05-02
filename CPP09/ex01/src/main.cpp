#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <ostream>
#include <stack>
#include <string>
#include <iostream>


class notANumOrOperator : public std::exception
{
	public : 
		virtual const char * what()const throw()
		{
			return ("Not a number or operator\n");
		}
};
class notEnoughNumbers : public std::exception
{
	public : 
		virtual const char * what()const throw()
		{
			return ("Not enough numbers\n");
		}
};

int	calculate(std::string str)
{
	std::stack<float> stack;
	
	for (size_t n = 0; n < str.length(); ++n)
	{
		char c = str[n];
		if (c == ' ')
			continue ;
		if (strchr("0123456789+-*/", c) == NULL)
			throw notANumOrOperator();
		if (strchr("+-*/", c))
		{
			if (stack.size() < 2)
				throw notEnoughNumbers();
			float val1 = stack.top();
			stack.pop();
			float val2 = stack.top();
			stack.pop();
			switch(c){
				case ('+'):
					stack.push(val2 + val1);
					break;
				case ('-'):
					stack.push(val2 - val1);
					break;
				case ('*'):
					stack.push(val2 * val1);
					break;
				case ('/'):
					stack.push(val2 / val1);
					break;
			}
			continue ;
		}
		stack.push(c - '0');
	}
	while (!stack.empty())
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
	return 0;
}

int	main(void)
{
	std::ifstream file("test.txt");
	if (!file.is_open())
	{
		std::cout << "cant open file" << std::endl;
		return (0);
	}
	std::string test_case;
	while (std::getline(file, test_case))
	{
		std::string rpn;
		std::getline(file, rpn);
		std::cout << test_case << std::endl << "Input\t:" << rpn << std::endl;
		try{
			std::cout << "Output\t:";
			calculate(rpn);
		}
		catch	(std::exception &e)
		{
			std::cout << e.what();
		}
		std::string correct;
		std::getline(file, correct);
		std::cout << "Correct\t:" << correct << std::endl << std::endl;;
		std::getline(file, test_case);
	}
}
