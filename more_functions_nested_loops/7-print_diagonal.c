#include "main.h"

/**
 *  print_diagonal - print lines
 * @n: number of diogonal lines
 */
void print_diagonal(int n)
{
int i, k;

for (i = 0; i < n; i++)
{
for (k = 0; k < i; k++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
