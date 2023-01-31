#include "libft.h"

void from_2_to_8(int n)
{
    int     tmp;
    int     length;
    char    *num;
    char    *result;

    num = "01";
    tmp = n;
    length = 0;
    while (tmp /= 2)
        length++;
    result = (char *)malloc(sizeof(char) * (length + 1));
    if (result == NULL)
        return ;
    while (n != 0)
    {
        result[length--] = num[n % 2];
        n /= 2;
    }
    ft_putstr(result);
}

int main(void)
{
    from_2_to_8(37);
    return (0);
}
