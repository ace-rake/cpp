#include "ClassHeaders/Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data * data = new Data();
	std::cout << data << std::endl;
	uintptr_t t = Serializer::serialize(data);
	std::cout << t << std::endl;
	Data * test = Serializer::deserialize(t);
	std::cout << test << std::endl;

}
