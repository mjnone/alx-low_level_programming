#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * @n: numbers included in the function
 * @...: the numbers to print the somme of
 * Return: The sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int m, sum = 0;

	va_start(ap, n);

	for (m = 0; m < n; m++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

