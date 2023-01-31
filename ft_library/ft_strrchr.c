#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*cp;
	size_t	j;

	cp = (char *)str;
	j = ft_strlen(str) - 1;
	while (cp[j])
	{
		if (cp[j] == c)
			return(&cp[j]);
		j--;
	}
	return 0;
}
