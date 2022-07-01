#ifndef function_pointers_h
#define function_pointers_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_name(char *name, void (*f)(char *));
#endif
