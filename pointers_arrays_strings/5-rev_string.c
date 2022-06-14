#include "main.h"

/**
 * rev_string - reversing
 * @s: pointer to a string
 */

void rev_string(char *s)
{

int i, k, c, j;
char a, b;
i = 0;
while (s[i])
{
i++;
}
k = i - 1;

for (c = 0; c <= k; c++)
{
for (j = k - 1; j != 0; j--)
{
a = s[c];
b = s[j];
s[c] = b;
s[j] = a;
}
}
}
