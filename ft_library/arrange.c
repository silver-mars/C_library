#include "libft.h"

int	main()
{
	int A[5] = {1, 2, 3, 4, 5};
	printf("%d\n", A[4]);

	int a[] = {1, 2, 3, 4, 5};
	printf("%d\n", a[3]);

	float B[5] = {1.0, 2.0, 3.5, 5.0, 7.5};
	printf("%f\n", B[2]);

	char C[5] = {'T', 'h', 'i', 's', '\n'};
	printf("%c\n\a", C[2]);
	return 0;
}
