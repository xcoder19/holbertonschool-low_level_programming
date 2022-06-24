

#include "main.h"

int **alloc_grid(int width, int height)
{
	int i, j, **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **)malloc(sizeof(int) * width * height);
	if (p != NULL)
	{
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
		return (NULL);
	}

	return p;
}