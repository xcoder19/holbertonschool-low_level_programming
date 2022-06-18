
#include "main.h"
#include <string.h>
/**
 * _strpbrk - strpbrk function
 * @s: pointer to char
 * @accept: pointer to char
 * Return: pointer to char of first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int k, j, position;
	int boolean = 0;

	position = strlen(s);

	for (k = 0; accept[k] != '\0'; k++)

	{

		for (j = 0; s[j] != '\0'; j++)

		{

			if (accept[k] == s[j])

			{

				if (j <= position)

				{

					position = j;

					boolean = 1;
				}
			}
		}
	}

	if (boolean)

	{

		return s + position;
	}

	return NULL;
}
