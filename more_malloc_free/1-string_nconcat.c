#include "main.h"
#include <string.h>
/**
 * string_nconcat - concat string
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: unsigned int
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *p;

	if (s1 == NULL)
	{
		*s1 = "";
	}
	if (s2 == NULL)
	{
		*s2 = "";
	}

	p = malloc(sizeof(s1) + n);
	if (p != NULL)
	{
		while (*s1 != '\0')
		{
			*p++ = *s1++;
		}

		while (n--)
		{
			*p++ = *s2++;
		}
		*p = '\0';
		return (p);
	}
	return (NULL);
}
