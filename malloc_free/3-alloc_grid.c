#include "main.h"
/**
 * alloc_grid - making a 2d array
 * @width: int
 * @height: int
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p;

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
		}
		if (p[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(p[i]);
			}
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				p[i][j] = 0;
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