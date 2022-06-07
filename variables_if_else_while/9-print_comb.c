#include <stdio.h>

/**
 * main - execution
 * Return: 0
 */
int main(void)
{
char i, v;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i != '9')
{
putchar(',');
}
};
return (0);
}
