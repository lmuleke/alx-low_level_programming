#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: grid width
 * @height: grid height
 * Return: pointer to 2D array,NULL if fails
 */
int **alloc_grid(int width, int height)
{
	int **lau;
	int l, m;

	if (width <= 0 || height <= 0)
		return (NULL);
	lau = malloc(height * sizeof(int *));
	if (lau == NULL)
		return (NULL);
	for (l = 0; l < height; l++)
	{
		lau[l] = malloc(width * sizeof(int));
		if (lau[l] == NULL)
		{
			for (m = 0; m < width; m++)
				free(lau[m]);
			free(lau);
			return (NULL);
		}

		for (m = 0; m < width; m++)
			lau[l][m] = 0;
	}
	return (lau);
}
