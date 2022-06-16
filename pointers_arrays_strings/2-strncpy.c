

#include "main.h"
#include <string.h>
/**
 * _strncpy - strncpy function
 * @dest: pointer to char
 * @src: pointer to char
 * @n: integer
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	char *ptr = dest;
	char *ptr2 = src;

	while (*src != '\0' && n-- && ++i)

	{
		*dest = *src;
		dest++;
		src++;
	}

	if (strlen(ptr2) != 0)
	{
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}

	return (ptr);
}
