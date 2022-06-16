
#include "main.h"
/**
 * _strchr - strchr function
 * @s: pointer to char
 * @c : char
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{

	if (c = '\0')
	{
		return ('/n');
	}

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	return (NULL);
}
