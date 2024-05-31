#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <ostream>
#include <stack>
#include <string>
#include <iostream>

class myException : public std::exception
{
	public:
		bool who;
};

class notANumOrOperator : public myException
{
	public : 
		virtual const char * what()const throw()
		{
			return ("Not a number or operator");
		}
		notANumOrOperator():who(true){}
		bool who;
};
class notEnoughNumbers : public myException
{
	public : 
		virtual const char * what()const throw()
		{
			return ("Not enough numbers");
		}
		notEnoughNumbers():who(true){}
		bool who;
};

void	print_stack(std::stack<float> stack)
{
	while (!stack.empty())
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
}

void	execute_single(char c, std::stack<float> & stack)
{
	if (c == ' ')
		return ;
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
		return ;
	}
	stack.push(c - '0');
}

int	calculate_str(std::string str)
{
	std::stack<float> stack;
	
	for (size_t n = 0; n < str.length(); ++n)
	{
		char c = str[n];
		execute_single(c, stack);
	}
	print_stack(stack);
	return 0;
}

void	calculate_input()
{
	std::stack<float> stack;

	std::string str;
	while (std::getline(std::cin, str))
	{
		for (size_t n = 0; n < str.length(); ++n)
		{
			char c = str[n];
			try
			{
				execute_single(c, stack);
			}
			catch(myException & e)
			{
				std::cout << e.what() << std::endl;
				if (str.length() == 1 && str.at(0) == 'q')
				{
					std::cout << "q caught\n";
					goto endloop;
				}
			}
		}
		if (std::cin.eof())
			break;
		std::cout << "Current stack :\n";
		print_stack(stack);
		std::cout << std::endl;
	}
endloop:
	std::cout << "Output :\n";
	print_stack(stack);
}

void	test()
{
	std::ifstream file("test.txt");
	if (!file.is_open())
	{
		std::cout << "cant open file" << std::endl;
		return;
	}
	std::string test_case;
	while (std::getline(file, test_case))
	{
		std::string rpn;
		std::getline(file, rpn);
		std::cout << test_case << std::endl << "Input\t:" << rpn << std::endl;
		try{
			std::cout << "Output\t:";
			calculate_str(rpn);
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

void	actual(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Args error\n";
		return ;
	}
	std::string rpn(argv[1]);	
	try
	{
		calculate_str(rpn);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(int argc, char **argv)
{
	/* test(); */
	if (argc == 2)
		actual(argc, argv);
	else
		calculate_input();
}
