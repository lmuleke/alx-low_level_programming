#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all
 * @format: list of type of arguements passed to function
 * Return: (0)
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(list, int));
		else if (format[i] == 'i')
			printf("%s%d", sep, va_arg(list, int));
		else if (format[i] == 'f')
			printf("%s%f", sep, va_arg(list, double));
		else if (format[i] == 's')
		{
			str = va_arg(list, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
		}

		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
			sep = ", ";
		i++;
	}
	printf("\n");
	va_end(list);
}
