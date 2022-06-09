#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural number
 * @n: integer
 * Return: On success the natural numbers.
 */

void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
{
n = n - 1;
printf("%d", n);
if (n != 98)
{
putchar(',');
putchar(' ');
}
}
}
while (n < 98)
{
n = n + 1;
printf("%d", n);
if (n != 98)
{
putchar(',');
putchar(' ');
}
}
}
