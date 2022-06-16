
#include "main.h"
#include "string.h"
/**
 * _memset - memset function
 * @s:pointer char
 * @b: char
 * @n unsigned int
 */

char *_strcat(char *dest, char *src)
{

	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}

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
