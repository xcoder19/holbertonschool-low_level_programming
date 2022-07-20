#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal
 * @index: index
 * Return: 1 or 0 on success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m, bt = 0;
	int i;
	unsigned long k;

	if (n == 0)
	{
		printf("0");
		return (0);
	}
	for (i = 64; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			bt = 1;
		}
		else
		{
			bt = 0;
		}
		m = i;
		if (m == index)
		{
			return (bt);
		}
	}
	return (-1);
}
