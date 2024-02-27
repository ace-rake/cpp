#include <iostream>
#include <cctype>
#include <cstring>
class Rectangle
{
private:
	int width;
	int height;

public:
	Rectangle(int w, int h)
	{
		this->width = w;
		this->height = h;
	}
	void display()
	{
		std::cout << "Width: [" << this->width << "] Height: [" << this->height << "]" << std::endl;
	}
	int	area()
	{
		return (this->width * this->height);
	}
};


int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; ++i)
			for (int j = 0; j < strlen(argv[i]); j++)
				std::cout << (char)toupper(argv[i][j]);
	std::cout << std::endl;
}
	
