#include "libft.h"

char	*ft_strsub(const char *str, unsigned int start, size_t len)
{
	unsigned int	j;
	size_t          k;
	char            *final_str;

	j = 0;
	k = 0;
	if (!str)
		return (NULL);
	while (str[j] && (j < start))
		j++;
	if (j != start)
		return (NULL);
	final_str = (char *)malloc((len + 1)*sizeof(char));
	if (final_str == NULL)
		return (NULL);
	while (str[j] && k < len)
		final_str[k++] = str[j++];
	final_str[k] = '\0';
	if (k != len)
		return (NULL);
	return (final_str);
}
