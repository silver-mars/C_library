#include "libft.h"

int	len_int(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void			ft_putnbr(int n)
{
	char		buffer[11];
	int		count;
	long int	nl;

	count = len_int(n);
	nl = n;
	if (n < 0)
	{
		buffer[0] = '-';
		nl = -nl;
	}
	buffer[count] = '\0';
	while (nl != 0)
	{
		buffer[--count] = 48 + (nl % 10);
		nl /= 10;
	}
	ft_putstr(buffer);
}
