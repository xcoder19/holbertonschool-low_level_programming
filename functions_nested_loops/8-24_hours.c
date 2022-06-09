#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - prints hours

 * Return: On success the last digit of a number.
 */

void jack_bauer(void)
{

int i, k;

for (i = 0; i <= 23; i++)
{
for (k = 0; i <= 59; k++)
{
putchar('0' + i);
putchar(':');
putchar('0' + k);
}
}
}
