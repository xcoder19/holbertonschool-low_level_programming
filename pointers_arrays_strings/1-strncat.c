#include "main.h"
#include <string.h>

/**
 * _strncat - strncat function
 * @dest: pointer to char
 * @src: pointer to char
 * @n: integer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*p++ = *src++;
	}

	*p = '\0';

	return dest;
}
