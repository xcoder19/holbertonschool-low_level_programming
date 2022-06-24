

#include "main.h"

int **alloc_grid(int width, int height)
{
	int i, **p;

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
	}
	else
	{
		free(p);

		for (i = 0; i < height; i++)
		{
			free(p[i]);
		}

		return (NULL);
	}

	return p;
}