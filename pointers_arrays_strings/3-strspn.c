
#include "main.h"
/**
 * _strlen - counting
 * @s: pointer to the first char of a string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; ++i)
		;

	return (i);
}
/**
 * _strspn - strspn function
 * @s: pointer to the first char of a string
 * @accept: pointer char
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	int k, j;

	for (j = 0; j <= _strlen(s) - 1; j++)
	{
		for (k = 0; k <= _strlen(accept) - 1; k++)
		{
			if (s[j] == accept[k])
			{
				i++;
			}

			if (k <= _strlen(accept) - 1 && i == 0)
			{
				break;
			}
		}
	}

	return (i);
}
