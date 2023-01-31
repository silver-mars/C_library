#include "libft.h"

void    ft_itoa_base_16(int n)
{
    char    *base_16;
    size_t     length;
    int     tmp;
    char    *result;

    base_16 = "0123456789ABCDEF";
    length = 0;
    tmp = n;
    while (tmp /= 16)
        length++;
    result = (char *)malloc((length + 1) * sizeof(char));
    if (result == NULL)
        return;
    while (n != 0)
    {
        result[length--] = base_16[n % 16];
        n /= 16;
    }
    ft_putstr(result);
}
