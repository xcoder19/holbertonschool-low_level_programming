#ifndef search_algos_h
#define search_algos_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_array(int *array, int start, int end);

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
