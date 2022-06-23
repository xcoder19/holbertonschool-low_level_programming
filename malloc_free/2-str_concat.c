#include <string.h>
#include "main.h"
/**
 * str_concat - concating 2 strings
 * @s1: string
 * @s2: string
 */
char *str_concat(char *s1, char *s2)
{
	char *arr, *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	arr = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	p = arr;
	if (arr != NULL)
	{
		while (*s1)
		{
			*arr++ = *s1++;
		}
		while (*s2)
		{
			*arr++ = *s2++;
		}
	}
	return (p);
}
