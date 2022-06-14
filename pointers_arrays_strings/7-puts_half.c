#include "main.h"
/**
 * _strlen - counts
 * @s: pointer char
 */

int _strlen(char *s)
{
int i;
for (i = 0; *(s + i) != '\0'; ++i)
;

return (i);
}
/**
 * puts_half - puts half
 * @str: pointer char
 */
void puts_half(char *str)
{

int len, n, i, j;
len = _strlen(str);
if (len == 0)
{

putchar('\n');
}
if (len % 2 != 2 && len != 0)
{
n = (len - 1) / 2;

for (i = n + 1; i != len; i++)
{
putchar(str[i]);
}
}

else if (len != 0)
{
for (j = len / 2; j != len - 1; j++)
{
putchar(str[j]);
}
}

putchar('\n');
}
