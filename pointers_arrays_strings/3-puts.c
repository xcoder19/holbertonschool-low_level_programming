
#include "main.h"
#include <string.h>
/**
 * _puts
 * @str: pointer to str
 */
void _puts(char *str)
{
int i;

int n;
n = strlen(str);
char k[n];
for (i = 0; i <= n; i++)
{
k[i] = *(str + i);
}

fprintf(stdout, k);
}