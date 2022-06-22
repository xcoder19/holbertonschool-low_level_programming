
#include "main.h"
/**
 * helper - sqrt
 * @n: int
 * @i: int
 * Return: int
 */
int helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	return (helper(n, i + 1));
}
/**
 * _sqrt_recursion - sqrt
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 1));
}
