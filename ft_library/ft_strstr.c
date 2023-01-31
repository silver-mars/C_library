#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*result_str;
	size_t	i;
	size_t	j;

	result_str = (char *)haystack;
	i = 0;
	while (result_str[i])
	{
		j = 0;
		if (result_str[i] == needle[j])
		{
			while (result_str[i+j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return (&result_str[i]);
			}
		}
		i++;
	}
	return 0;
}
