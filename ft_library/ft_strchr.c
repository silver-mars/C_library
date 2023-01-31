#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*cp;
	size_t	i;

	cp = (char *)str;
	i = 0;
	while (cp[i])
	{
		if (cp[i] == c)
			return (&cp[i]);
		i++;
	}
	return (0);
}
