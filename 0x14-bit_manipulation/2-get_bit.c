#include "main.h"

/**
 * get_bit - returns the value of a bit in a decimal number at an index
 * @n: number to search
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;

	return (bit_value);
}