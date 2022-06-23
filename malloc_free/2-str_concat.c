#include <string.h>
#include "main.h"
char *str_concat(char *s1, char *s2)
{
	char *arr;
	char *p;

	arr = (char *)malloc(sizeof(char) * strlen(s2));
	p = arr;
	while (arr != NULL)
	{

		*arr++ = *s1++;
	}

	while (arr != NULL)
	{
		*arr++ = *s2++;
	}

	return p;
}