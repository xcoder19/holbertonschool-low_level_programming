#include "main.h"
/**
 * print_diagsums - print diagonal numbers
 * @a: int pointer
 * @size: size integer
 */
void print_diagsums(int *a, int size)
{
	int i, val1 = 0, val2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		val1 += a[i];
	}

	for (i = size - 1; i <= (size * (size - 1)); i += (size - 1))
	{
		val2 += a[i];
	}

	printf("%d, %d\n", val1, val2);
}
