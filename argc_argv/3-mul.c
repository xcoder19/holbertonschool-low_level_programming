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
	if (argv[2])
	{
		printf("%d", argv[1] * argv[2]);
		return (0);
	}

	return (1);
}
