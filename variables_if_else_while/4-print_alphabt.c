#include <stdio.h>

/**
 * main - execution
 * Return: 0
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' && i == 'e')
{
i = "";
};
putchar(i);
};
putchar('\n');
return (0);
}
