#include "main.h"
#include <stdio.h>
/**
 * _isalpha - print alphabet
 * @c: the character
 * Return: On success 1.
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}

return (0);
}
