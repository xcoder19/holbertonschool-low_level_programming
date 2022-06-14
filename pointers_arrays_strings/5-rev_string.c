#include "main.h"
#include <string.h>
/**
 * rev_string - reversing
 * @s: pointer to a string
 */

void rev_string(char *s)
{
int i, v, k;

for (i = 0; i < strlen(s) / 2; i++)
{
v = s[i];
k = strlen(s) - i;
s[i] = s[k - 1];
s[k - 1] = v;
}
}
