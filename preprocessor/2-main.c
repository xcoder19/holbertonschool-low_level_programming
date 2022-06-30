

#include <stdio.h>

/**
 * main - execution
 * Return: 0
 */

int main(void)
{

	int i;

	i = 0;
	while (i < strlen(__FILE__))
	{

		putchar(__FILE__[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
