#include "libft.h"

int			main(void)
{
//	int*			pi; //* = адресный тип. pi = переменная указатель.
//(Часть именования).

//	*pi = 20;
//(Разыменование).

//Массив - const адрес + область памяти.
	int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//A[i] = *(A + i);
	printf("%d\n", *A);
	int	*p = A + 5;
	printf("%d\n", *p);
	printf("%d\n", p[-1]);
//*p - разыменование.
	int	*j;

	j = (A + 9);
	printf("%d\n", *j);
	j = (A + 10);
	printf("%d\n", *j);
	return 0;
}
