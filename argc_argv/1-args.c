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
	if (argv[1])
	{
		putchar('0' + argc - 1);
		putchar('\n');
		return (0);
	}
	else
	{
		putchar('0');
		putchar('\n');
		return (0);
	}
	return (0);
}
