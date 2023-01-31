#include "libft.h"

int ft_atoi2(const char *str)
{
    int j;
    int result;

    j = 0;
    result = 0;
    while (str[j] >= '0' && str[j] <= '9')
    {
        result = (result * 10) + (str[j] - '0');
        j++;
    }
    return (result);
}
