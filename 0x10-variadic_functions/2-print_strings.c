#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings the a new line
 * @separator: the string to be printed between strings
 * @n: number of string passed to the function
 * @...: Variable number of strings to be printed
 *
 * Description: separator is not printed if it is NULL
 * (nil) is printed if one string is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);

			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("(nil)");
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(args);
	printf("\n");
}
