
#include "main.h"

/**
 * *_strcpy - copy string
 * @dest: pointer char
 * @src: pointer char
 */

char *_strcpy(char *dest, char *src)
{
char *p = dest;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}

*dest = '\0';

return p;
}
