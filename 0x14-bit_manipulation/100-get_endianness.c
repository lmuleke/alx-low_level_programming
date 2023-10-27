#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 if it big and 1 if it is little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
