
#include "main.h"
/**
 *  print_array - prints array
 * @a: int pointer
 * @n : int
 */
void print_array(int *a, int n)
{
int i;
if (n < 0)
{
putchar('\n');
}
else
{
for (i = 0; i != n; i++)
{

printf("%d", a[i]);
if (i != n - 1)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
