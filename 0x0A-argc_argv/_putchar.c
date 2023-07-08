#include "main.h"
#include <stdio.h>

/**
 * _putchar - prints a character to the standard output
 * @c: The character to be printed
 *
 * Return: On success 1.
 * On error, returns -1 and sets errno.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
