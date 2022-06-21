#include "main.h"
/**
 * _puts_recursion - puts with recursion
 * @s: pointer char
 */
void _puts_recursion(char *s)
{
	putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
}
