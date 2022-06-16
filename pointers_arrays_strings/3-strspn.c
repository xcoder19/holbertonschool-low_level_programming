
#include "main.h"
int _strlen(char *s)
{
	int i;
	for (i = 0; *(s + i) != '\0'; ++i)
		;

	return (i);
}
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int k, j;

	for (j = 0; j <= _strlen(s) - 1; j++)
	{
		for (k = 0; k <= _strlen(accept) - 1; k++)
		{
			if (s[j] == accept[k])
			{
				i++;
			}
		}
	}

	return (i);
}
