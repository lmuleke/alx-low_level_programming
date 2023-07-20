#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate sum of.
 *
 * Return: If n == 0 -0.
 *      otherwise - the sum of all parameters.
 */
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
