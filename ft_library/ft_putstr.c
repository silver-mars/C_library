#include "libft.h"

void        ft_putstr(char *str)
{
	size_t	a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}
