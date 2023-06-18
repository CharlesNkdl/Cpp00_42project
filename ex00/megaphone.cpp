#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		int	i;
		long unsigned int	j;

		j = 0;
		i = 1;
		while (i < argc)
		{
			std::string arg = argv[i];
			while (j < arg.length())
			{
				arg[j] = std::toupper(arg[j]);
				j++;
			}
			j = 0;
			std::cout << arg;
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
