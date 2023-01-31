#include "libft.h"

int	main()
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(float));
	printf("%lu\n", sizeof(double));
	int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 };
	printf("Number of elements: %lu\n", sizeof(arr) / sizeof(arr[0]));
	int* ptr = (int*)malloc(10 * sizeof(int));
	printf("Pointer size: %lu\n", sizeof(ptr));
	return 0;
}
