#include "main.h"

/**
 * rev_string - reversing
 * @s: pointer to a string
 */

void rev_string(char *s)
{
int i, m, v, k;

for (m = 0; *(s + m) != '\0'; ++m)
;

for (i = 0; i < m / 2; i++)
{
v = s[i];
k = m - i;
s[i] = s[k - 1];
s[k - 1] = v;
}
}
