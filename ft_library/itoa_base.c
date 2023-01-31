#include "libft.h"

void    ft_itoa(int n)
{
    char    *base_36;
    size_t     length;
    int     tmp;
    char    *coded;

    base_36 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    length = 0;
    tmp = n;
    while (tmp /= 36)
        length++;
    printf("%ld\n", length);
    coded = (char *)malloc((length + 1) * sizeof(char));
    if (coded == NULL)
        return;
    while (n != 0)
    {
        coded[length--] = base_36[n % 36];
        n /= 36;
    }
    ft_putstr(coded);
}

int     main(void)
{
    int a;
    a = 12376493;

    ft_itoa(a);
    return 0;
}
