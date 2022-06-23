#include <stdio.h>
#include <stdlib.h>
/**
 * main - outputs the name of the file
 * @argc: counts of arguments
 * @argv: array of values
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (*argv)
	{
		putchar('0' + argc);
		putchar('\n');
		return (0);
	}
	return (0);
}
