#include "main.h"
/**
 * _strncat - strncat function
 * @dest: pointer to char
 * @src: pointer to char
 * @n: integer
 */
char *_strncat(char *dest, char *src, int n)
{

	char *ptr = dest + strlen(dest);

	while (*src && n--)
	{
		*dest++ = *src++;
	}

	*ptr = '\0';

	return dest;
}
