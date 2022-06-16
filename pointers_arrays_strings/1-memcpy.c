
#include "main.h"
#include "string.h"
/**
 * _memcpy - memcpy function
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 * Return: pointer s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	char *p = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (p);
}
