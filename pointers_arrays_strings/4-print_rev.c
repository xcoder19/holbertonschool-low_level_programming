
#include "main.h"

/**
 * print_rev - print in reverse
 * @s: char pointer
 */

void print_rev(char *s)
{
int i, k;
i = 0;
while (s[i])
{
i++;
}
k = i - 1;

while (k >= 0)
{
putchar(s[k]);
k--;
}
putchar('\n');
}
