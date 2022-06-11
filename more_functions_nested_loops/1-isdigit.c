#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checking if c is digit
 * @c: argument int
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{

if (c >= 48 && c <= 57)
{

return (1);
}

return (0);
}
