#include "libft.h"

void	ft_swap(void *a, void *b)
{
	char	tmp;
	size_t i;
	i = 0;

	while (((char *)a)[i])
	{
		tmp = ((char *)b)[i];
		((char*)b)[i] = ((char*)a)[i];
		((char*)a)[i] = tmp;
		i++;
	}
		printf("%s\t", (char *)a);
		printf("%s\n", (char *)b);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_swap(argv[1], argv[2]);
	return 0;
}
