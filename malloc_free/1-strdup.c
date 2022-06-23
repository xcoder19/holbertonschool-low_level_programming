#include <string.h>
#include "main.h"

/**
 * _strdup - copy string
 * @str: char pointer
 * Return: char pointer
 */

char *_strdup(char *str)
{
	if (str != NULL)
	{
		char *p;

		unsigned long k;

		int i;

		k = strlen(str);
		p = (char *)malloc(sizeof(char) * k);

		i = 0;
		while (str[i])
		{
			p[i] = str[i];
			i++;
		}

		return (p);
	}
	else
	{
		printf("failed to allocate memory\n");
		return NULL;
	}
}
