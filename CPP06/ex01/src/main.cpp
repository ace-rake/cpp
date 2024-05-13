#include "ClassHeaders/Serializer.hpp"
#include <iostream>
#include "../../../colors.h"

int	main(void)
{
	Data * data = new Data();

	print_test("print data address");
	std::cout << data << std::endl;

	data->int_data = 42;
	data->char_data = '*';

	print_test("serialize and print serialized number");
	uintptr_t t = Serializer::serialize(data);
	std::cout << t << std::endl;

	print_test("deserialize and print out gotten data address and values");
	Data * test = Serializer::deserialize(t);
	std::cout << test << std::endl;
	std::cout << "int : " <<  test->int_data << ", char : " << test->char_data << std::endl;


	print_test("change original data and see if new data ptr has changed values");
	data->char_data = 'f';
	data->int_data = 19;
	std::cout << "int : " <<  test->int_data << ", char : " << test->char_data << std::endl;

	print_test("change new data and see if old data ptr has changed values");
	test->int_data = 5;
	test->char_data = 'y';
	std::cout << "int : " <<  data->int_data << ", char : " << data->char_data << std::endl;

	delete data;
}
