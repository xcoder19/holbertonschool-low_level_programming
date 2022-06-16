

#include "main.h"
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
	while (*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

		return (ptr);
}
