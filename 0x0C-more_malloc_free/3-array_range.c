#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to the new created array
 */
int *array_range(int min, int max)
{
	int *lnm;
	int size, n;

	if (min >max)
		return (NULL);

	size = max - min + 1;
	lnm = malloc(sizeof(int) * size);
	if (lnm == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		lnm[n] = min++;

	return (lnm);
}
