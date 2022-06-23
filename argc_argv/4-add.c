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
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%d", argv[i][0]);
	}
	return (0);
}
