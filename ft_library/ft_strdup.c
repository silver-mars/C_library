#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*final;

	i = 0;
	final = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	if (final == NULL)
		return (NULL);
	while (str[i])
	{
		final[i] = str[i];
		i++;
	}
	final[i] = str[i];
	return(final);
}
