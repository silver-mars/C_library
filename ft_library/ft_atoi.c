#include "libft.h"

int ft_atoi(const char *str)
{
    int count;
    int j;
    int result;

    count = 0;
    j = 0;
    result = 0;
    while (str[count] >= '0' && str[count] <= '9')
        count++;
    while (--count >= 0)
    {
        result += (str[j] - '0') * ft_pow(10, count);
        j++;
    }
    return (result);
}
