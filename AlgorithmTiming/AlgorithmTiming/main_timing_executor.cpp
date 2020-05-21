#include <iostream>

void menu_input_cpus()
{
	// verify CPUs 
}

void menu_init(void)
{
	std::cout << "Welcome to performance evaluation based on power consumption: \n1. Enter CPUs \2. Exit\n";
	
	int option;
	std::cin >> option;
	
	if (option == 1)
	{
		// do stuff
	}
	else if (option == 2)
	{
		std::exit(0);
	}
	else
	{
		std::cout << "invalid option \n";
	}
}

int main()
{
	return 0;
}