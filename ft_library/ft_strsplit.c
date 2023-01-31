#include "libft.h"

size_t	count_str(const char *str, int c)
{
	size_t  count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] == c && str[i+1] != c && str[i+1])
			count++;
		i++;
	}
	return (count + 1);
}

static unsigned int start_index(const char *str, char c)
{
    unsigned int    a;

    a = 0;
    while (str[a] == c)
        a++;
    while (str[a] != c)
        a++;
    return (a);
}

size_t	len_word(const char *str, char c)
{
	size_t	len;

	len = 0;
    len = start_index(str, c);
	while (str[length_index++] != c)
		len++;
	return (len);
}

char	**ft_strsplit(const char *str, char c)
{
	char                **str_l;
	size_t              count;
	size_t              j;
	unsigned int        length_index;
    size_t              length_str;

	str_l = NULL;
	count = count_str(str, c);
	j = 0;
	length_index = 0;
	str_l = (char **)malloc(count * sizeof(char *));
	if (str_l == NULL)
		return (NULL);

	while (j <= count)
	{
        length_str = len_word(str, length_index, c);
        printf("length_str = %ld\n", length_str);
		str_l[j] = (char *)malloc((length_str + 1) * sizeof(char));
        if (str_l[j] == NULL)
        {
            ft_putstr("We all die!");
            return (NULL);
        }
        printf("length_index = %d\n", (unsigned int)length_index);
        str_l[j] = ft_strsub(str, length_index, length_str);
		j++;
        printf("j = %ld\n", j);
    //    printf("%s\n", str_l[j]);
	}
//	free(str_l);
	printf("%ld\n", count);
	return (str_l);
}
