#include "main.h"

/**
 * _print_rev_recursion - print in rev
 * @s: pointer to a string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
