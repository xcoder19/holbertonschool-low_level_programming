#include "main.h"
/** printf_binary - convert decimal to binary
 * @n: decimal
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long k;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			printf("1");
			flag = 1;
		}
		else if (flag)
		{
			printf("0");
		}
	}
}
