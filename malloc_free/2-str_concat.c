#include <string.h>
#include "main.h"
char *str_concat(char *s1, char *s2)
{
	unsigned long k;
	char *arr;
	char *p;
	k = strlen(s2) + strlen(s1) + 1;
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