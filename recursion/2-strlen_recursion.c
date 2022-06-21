#include "main.h"
/**
 * _strlen_recursion - strlen
 * @s: pointer to string
 * Return len of s array
 */
int _strlen_recursion(char *s)

{

	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}

	return (0);
}
