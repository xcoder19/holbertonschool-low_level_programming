#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%s", "is positive");
}
else if (n == 0)
{
printf("%s", "is zero");
}
else
{
printf("%s", "is negative");
};
return (0);
}