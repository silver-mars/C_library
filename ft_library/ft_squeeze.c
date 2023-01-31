#include "libft.h"

void ft_squeeze(char *str, int c)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] != c)
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    ft_putstr(str);
}
