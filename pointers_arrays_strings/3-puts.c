
#include "main.h"
#include <string.h>
/**
 * _puts
 * @str: pointer to str
 */
void _puts(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
}
