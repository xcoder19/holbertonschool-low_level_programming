#ifndef _lists_h
#define _lists_h
#include <stdio.h>
unsigned int binary_to_uint(const char *b);
int _pow_recursion(int x, int y);
int _strlen(const char *s);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
