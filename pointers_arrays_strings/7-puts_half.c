
#include "main.h"
void puts_half(char *str)
{

int len, n, i;
len = _strlen(str);

if (len % 2 != 2)
{
n = (len - 1) / 2;

for (i = 0; i <= n; i++)
{
putchar(str[i]);
}
}
else
{
for (i = 0; i <= len / 2; i++)
{
putchar(str[i]);
}
}
putchar('\n');
}