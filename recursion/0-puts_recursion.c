#include "main.h"
/**
 * _puts_recursion - puts with recursion
 * @s: pointer char
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		if (*s != '\0')
		{
			putchar('\n');
			_puts_recursion(s + 1);
		}
	}
}
