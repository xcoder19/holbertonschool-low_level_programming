
#include "main.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: binary string
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec = 0, temp, m = _strlen(b) - 1;

	i = 0;

	while (*(b + (m - i)) != '\0')
	{

		if (b[m - i] != 48 && b[m - i] != 49)
		{
			return 0;
		}

		temp = b[m - i] - '0';

		dec = dec + (temp * _pow_recursion(2, i));
		i++;
	}
	return dec;
}

/**
 *_pow_recursion - power
 * @x: int
 * @y: int
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}

/**
 * _strlen - counting
 * @s: pointer to the first char of a string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;
	for (i = 0; *(s + i) != '\0'; ++i)
		;

	return (i);
}