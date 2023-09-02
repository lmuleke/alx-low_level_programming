#include "main.h"

/**
 * flip_bits - counts number changing bits
 * to get from a number to the other
 * @n: first number
 * @m: second number
 *
 * Return: number of changing bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> 1;
		if (current & 1)
			count++;
	}
	return (count);
}
