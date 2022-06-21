#include "main.h"
/**
 * is_prime_number - prime number checker
 * @n: int
 * Return: 1 or 0
 */

int isprime(int i, int j)
{
	if (j < 2 || j % i == 0)
	{
		return (0);
	}

	if (i > (j / 2))
	{
		return (1);
	}

	return (isprime(i + 1, j));
}

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	return (isprime(2, n));
}
