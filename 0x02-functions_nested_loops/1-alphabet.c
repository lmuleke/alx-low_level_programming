#include "main.h"

/**
 * Print_alphabet - The function prints the English alphabet in lowercase,
 * starting fron 'a' and ending with 'z' followed by a new line.
 * 
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
