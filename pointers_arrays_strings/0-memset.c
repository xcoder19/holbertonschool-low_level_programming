
#include "main.h"
#include "string.h"
/**
 * _memset - memset function
 * @s:pointer char
 * @b: char
 * @n: unsigned int
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{

	char *p = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (p);
}
