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
	if (argc != 3)
	{
		int k, j;
		k = argv[1];
		j = argv[2];
		printf("%d", k * j);
		return (0);
	}

	return (1);
}
