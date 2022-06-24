#include "main.h"
/**
 * _strcmp - compare  strings
 * @s1: char pointer
 * @s2: char pointer
 * Return: 0 or 13 or -13
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1++ != *s2++)
		{
			if (*s1 > *s2)
			{
				return (13);
			}
			else
			{
				return (-13);
			}
		}
	}

	return (0);
}
