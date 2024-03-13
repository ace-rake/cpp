#include "main.h"
#include "../../../colors.h"

int    main(void)
{
	print_test("Creating harl");
	{
	Harl child;

	print_test("Harl: debug");
	child.complain("debug");

	print_test("Harl: info");
	child.complain("info");

	print_test("Harl: warning");
	child.complain("warning");

	print_test("Harl: error");
	child.complain("error");


	print_test("Harl: Nonexistent command");
	child.complain("Nonexistent");

	print_test("End of test");
	}
}
