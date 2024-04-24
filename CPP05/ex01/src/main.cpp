#include <exception>
#include <iostream>
#include "ClassHeaders/Bureaucrat.hpp"
#include "../../../colors.h"
#include "ClassHeaders/Form.hpp"

int main() {

	/* { */
	/* 	print_test("General creation and destruction"); */
	/* 	try */
	/* 	{ */
	/* 		Bureaucrat Geoff("Geoff", 1); */
	/* 		print_test("<< overload"); */
	/* 		std::cout << Geoff; */
	/* 	} */
	/* 	catch(const std::exception &e) */
	/* 	{ */
	/* 		std::cout << e.what(); */
	/* 	} */
	/* } */
	/*  */
	/* { */
	/* 	print_test("Set to invalid grade"); */
	/* 	print_test("set too high"); */
	/* 	try */
	/* 	{ */
	/* 		Bureaucrat Geoff("Geoff", 151); */
	/* 	} */
	/* 	catch(const std::exception &e) */
	/* 	{ */
	/* 		std::cout << e.what(); */
	/* 	} */
	/* 	print_test("set too low"); */
	/* 	try */
	/* 	{ */
	/* 		Bureaucrat Geoff("Geoff", 0); */
	/* 	} */
	/* 	catch(const std::exception &e) */
	/* 	{ */
	/* 		std::cout << e.what(); */
	/* 	} */
	/* } */
	/* { */
	/* 	print_test("Increment and decrement"); */
	/* 	print_test("Decrement beneath 1"); */
	/* 	Bureaucrat Geoff("Geoff", 1); */
	/* 	try{ */
	/* 		Geoff.decrementGrade(); */
	/* 	} */
	/* 	catch (const std::exception &e) */
	/* 	{ */
	/* 		std::cout << e.what(); */
	/* 	} */
	/* 	print_test("Increment over 150"); */
	/* 	try{ */
	/* 		Geoff.setGrade(150); */
	/* 		Geoff.incrementGrade(); */
	/* 	} */
	/* 	catch (const std::exception &e) */
	/* 	{ */
	/* 		std::cout << e.what(); */
	/* 	} */
	/* } */
	{
		print_test("Not enough clearance");
		Bureaucrat b("Geoff", 2);
		Form f("test", 1, 1);
		try
		{
			b.signForm(f);
		}
		catch(std::exception & e)
		{
			std::cout << e.what();
		}
	}
    return 0;
}

