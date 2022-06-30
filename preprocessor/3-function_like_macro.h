#ifndef _3_function_like_macro
#define _3_function_like_macro
#include <stdio.h>
#define ABS(X) (X<0?printf("%d",-X):printf("%d",X))
#endif