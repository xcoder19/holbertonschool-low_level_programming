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

	while (argc--)
	{
		printf("%s\n", argv[argc]);
	}
	putchar('\n');
	return (0);
}
