
#include "main.h"
/**
 * _sqrt_recursion - sqrt
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{

	if (_sqrt_recursion(n * n) == n)
	{
		return (n);
	}
}
