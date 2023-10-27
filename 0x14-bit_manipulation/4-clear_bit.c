#include "main.h"

/**
 * clear_bit - sets value of a bit to 0
 * @n: pointer to changing number
 * @index: index of clearing bit
 *
 * Return: if successful 1 otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
