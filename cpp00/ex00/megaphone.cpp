#include <iostream>
#include <sstream>
#include <string>

static int noarg(int ac);
static void	print_dbtab_capitalized(char **av);
static void	print_endl();

int main(int ac, char **av)
{
	if (noarg(ac))
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		print_dbtab_capitalized(av);
	print_endl();
	return (0);
}

static int noarg(int ac)
{
	if (ac < 2)
		return (1);
	return (0);
}

static void	print_dbtab_capitalized(char **av)
{
	for (size_t j = 1; av[j]; j++)
		for (size_t i = 0; av[j][i]; i++)
			std::cout << (char)toupper(av[j][i]);
}

static void	print_endl()
{
	std::cout << std::endl;
}



