#include "main.h"

/** print_triangle - print a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
int k, i;
if (size <= 0)
{

_putchar('\n');
}

else
{

for (i = 0; i <= size; i++)
{

for (k = 0; k <= size; k++)
{
_putchar('\n');
}
putchar('#');
}
}
}