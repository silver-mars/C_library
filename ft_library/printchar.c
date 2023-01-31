#include "libft.h"

void	printchar(char c)
{
	printf("This char number code is: %d\n", c);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printchar(argv[1][0]);
	return (0);
}
