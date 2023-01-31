#include "libft.h"

void ft_itoa_base_2(int integer)
{
    char    *num;
    char    *result;
    int     tmp;
    int     length;

    num = "01";
    tmp = integer;
    length = 0;
    while (tmp /= 2)
        length++;
    result = (char *)malloc(sizeof(char) * (length + 1));
    if (result == NULL)
        return ;
    while (integer != 0)
    {
        result[length--] = num[integer % 2];
        integer /= 2;
    }
    ft_putstr(result);
}
