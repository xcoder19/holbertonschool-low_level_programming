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
	if (argc <= 3)
	{

		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

		return (0);
	}
	printf("ERROR");

	return (1);
}
