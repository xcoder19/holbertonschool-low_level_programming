#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - called first things
 * Return: 0
 */
int main(void)
{
int n, v;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
v = n % 10;
if (v > 5)
{
printf("last digit of %d is %d and is greater than 5", n, v);
}
else if (v == 0)
{
printf("last digit of %d is %d and is 0", n, v);
}
else if (v < 6 && v != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0", n, v);
}
return (0);
}
