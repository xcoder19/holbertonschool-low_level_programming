#include "main.h"
#include <stdio.h>
/**
 * main - execution
 * Return: 0
 */
int main(void)
{
print_alphabet();
return (0);
}
/**
 * print_alphabet - print alphabet
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
