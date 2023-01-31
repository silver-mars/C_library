#include "libft.h"

void ft_squeeze_str(char *str1, char *str2)
{
    size_t  i;
    size_t  j;
    size_t  k;

    i = 0;
    j = 0;
    k = 0;
    while (str1[i])
    {
        while (str2[j] && str1[i] != str2[j++])
        {
            if (str2[j] == '\0')
                str1[k++] = str1[i];
        }
        j = 0;
        i++;
    }
    str1[k] = '\0';
    ft_putstr(str1);
}
