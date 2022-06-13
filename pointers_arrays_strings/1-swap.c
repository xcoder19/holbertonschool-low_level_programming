#include "main.h"
/**
 * swap_int - swapingint
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
int k;
k = *b;
*b = *a;
*a = k;
}
