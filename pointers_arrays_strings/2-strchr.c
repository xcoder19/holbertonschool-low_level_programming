
#include "main.h"
/**
 * _strchr - strchr function
 * @s: pointer to char
 * @c : char
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	if (*s == '\0' && *s == c)
	{
		return s;
	}
	return NULL;
}
