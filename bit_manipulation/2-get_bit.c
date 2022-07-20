#include "main.h"
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, bt = 0;

	unsigned long k;
	if (n == 0)
	{
		printf("0");
		return 0;
	}
	for (i = 64; i > 0; i--)
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

		if (i == index)
		{
			return bt;
		}
	}
	return 0;
}