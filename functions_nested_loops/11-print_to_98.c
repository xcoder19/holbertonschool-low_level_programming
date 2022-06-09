#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural number
 * @n: integer

 * Return: On success the natural numbers.
 */

void print_to_98(int n)
{
int k;
if (n <= 98)
{
for (k = n; k <= 98; k++)
{
_putchar('0' + k);
}
}
else if (n < 0)
{
for (k = n; k <= 98; k++)
{
_putchar('0' + k);
}
}
else
{
for (k = n; k >= 98; k++)
{
_putchar('0' + k);
}
}
}
