#include "libft.h"

int	main(int argc, char** argv)
{
	if (argc >= 1)
        printf("%s\n", argv[0]);
    ft_strsplit(argv[1], ',');
	return (0);
}
