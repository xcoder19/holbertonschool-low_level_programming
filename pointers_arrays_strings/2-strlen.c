#include "main.h"
/**
 * _strlen - counting
 * @s: pointer to the first char of a string
 * Return: length of string
 */
int _strlen(char *s)
{
    int i;
    for (i = 0; *(s + i) != '\0'; ++i)
        ;

    return (i);
}
