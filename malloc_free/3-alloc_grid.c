#include "main.h"
/**
 * alloc_grid - making a 2d array
 * @width: int
 * @height: int
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, **p, flag;

	flag = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **)malloc(sizeof(int *) * height);
	if (p != NULL)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = (int *)malloc(sizeof(int) * width);

			if (p[i] == NULL)
			{

				flag = 1;
			}
		}
		if (flag)
		{
			for (i = 0; i < height; i++)
			{
				free(p[i]);
				free(p);
				return (NULL);
			}
		}
	}

	else
	{
		free(p);
		return (NULL);
	}

	return (p);
}