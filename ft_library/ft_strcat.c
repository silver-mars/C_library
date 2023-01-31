#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str1[i])
		i++;
	while (str2[j])
		str1[i++] = str2[j++];
	str1[i] = '\0';
	return (str1);
}
