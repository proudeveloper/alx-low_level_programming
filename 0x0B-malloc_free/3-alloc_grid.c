#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: first parameter
 * @height: second parameter
 * Return: 0
 */
int **alloc_gric(int width, int height)
{
	int i, j, **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			return (NULL);

		}
		for (j = 0; j < width; j++)
			p[i] = 0;
	}
	return (p);

}
