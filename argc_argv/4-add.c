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
	int i, j, k, n, flag;

	flag = 0;

	j = 0;

	k = 0;

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (atoi(&argv[i][n]) == 0)
			{
				flag = 1;
			}
		}

		if (atoi(argv[i]) && flag != 1)
		{
			j += atoi(argv[i]);
		}
		else
		{
			k++;
		}
	}
	if (k > 0)
	{
		printf("Error\n");
		return (1);
	}
	else if (j == 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	else
	{
		printf("%d\n", j);
		return (j);
	}
}
