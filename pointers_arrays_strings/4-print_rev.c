
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

for (k = i; k >= i; i--)
{
putchar(s[k]);
}
}
