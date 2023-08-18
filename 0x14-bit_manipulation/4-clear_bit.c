#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1
 * @n: a pointer to the number that is to change
 * @index: index of the bit to clear
 *
 * Return: success (1), failure (-1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);

}
