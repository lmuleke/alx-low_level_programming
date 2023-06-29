#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

while (*ptr)
ptr++;

while (*src && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}

*ptr = '\0';

return (dest);
}
