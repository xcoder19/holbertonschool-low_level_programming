#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print for 0 to 9
 */
void print_numbers(void)
{

int i;
i = 0;
while (i < 9)
{

_putchar('0' + i);
i++;
}
_putchar('0' + i);
}
