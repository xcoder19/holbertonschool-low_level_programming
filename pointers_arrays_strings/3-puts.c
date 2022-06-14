
#include "main.h"

/**
 * _puts - put function
 * @str: pointer to str
 */
void _puts(char *str)
{
int i;
i = 0;
while (str[i])
{
putchar(str[i]);
i++;
}
putchar('\n');
}
