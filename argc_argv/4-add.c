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
	int i, j, k;

	j = 0;
	k = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			j += atoi(argv[i]);
		}
		else
		{
			k++;
		}
	}
	if (j == 0)
	{
		return (0);
	}
	else if (k > 0)
	{
		printf("Error");
		return (1);
	}
	else
	{
		return (j);
	}
}
