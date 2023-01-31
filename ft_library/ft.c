#include "libft.h"

void	ft_bzero(char *s, size_t n)
{
	int	i;
	i = 0;
	char	c;
	c = 'A';
	printf("%s\n", s);
	while (n > 0)
	{
		s[i] = c;
		n--;
		i++;
	}
	printf("%s\n", (char *)s);
}

int	main()
{
	char	*str;
	str = "This is a peace\n";
	printf("%s\n", str);
	ft_bzero(str, 5);
	return 0;
}
