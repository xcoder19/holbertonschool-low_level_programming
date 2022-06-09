#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - checks
 * @i: integer
 * Return: On success the last digit of a number.
 */

int print_last_digit(int i)
{
int r = abs(i) % 10;
_putchar('0' + r);
return (r);
}
