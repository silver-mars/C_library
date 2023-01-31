#include "libft.h"

long int    ft_pow(int num, int pow)
{
    long int    x;

    x = num;
    if (pow > 1)
    {
        while (--pow)
            x *= num;
        return (x);
    }
    else if (pow == 1)
        return (x);
    else if (pow == 0)
        return (1);
    else
    {
        ft_putstr("Power is negative\n");
        return (0);
    }
}
