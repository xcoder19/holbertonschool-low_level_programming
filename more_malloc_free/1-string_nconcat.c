#include "main.h"
#include <string.h>
/**
 * string_nconcat - concat string
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: number of bytes to copy
 * Return: pointer to char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *p;

	int i, j;
	int len;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len = sizeof(s1) + n;

	p = malloc(len + 3);
	if (p != NULL)
	{

		i = 0;
		while (s1[i] != '\0')
		{
			p[i] = s1[i];
			i++;
		}

		j = 0;
		while (n--)
		{
			p[i] = s2[j];
			j++;
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
