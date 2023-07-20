#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int i;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
