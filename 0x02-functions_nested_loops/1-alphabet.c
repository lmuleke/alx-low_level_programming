#include "main.h"

/**
 * Print_alphabet - Make the alphabet.The function prints the
 * english alphabet in lowercase.
 * Return: void
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
