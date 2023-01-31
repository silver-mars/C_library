#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	i = 0;
	j = 0;
	if (!str1 || !str2)
		return (NULL);
	new_str = (char *)malloc((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (str1[i])
	{
		new_str[i] = str1[i];
		i++;
	}
	while (str2[j])
		new_str[i++] = str2[j++];
	new_str[i] = '\0';
	return (new_str);
}
