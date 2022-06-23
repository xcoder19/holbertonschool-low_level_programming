#include <string.h>
#include "main.h"
char *str_concat(char *s1, char *s2)
{
	char *arr, *k;
	if (s1 == NULL)
	{
		*s1 = '';
	}
	if (s2 == NULL)
	{
		*s2 = '';
	}
	arr = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	while (arr != NULL)
	{
		k = s1 + strlen(s1);

		while (*s2 != '\0')
		{
			*k++ = *s2++;
		}

		*k = '\0';
	}

	arr = k;

	return arr;
}