#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints a variable number of integers followed by a new line.
 * @separator: The string to be printed between numbers, or NULL if not needed
 * @n: The number of integers passed to the function.
 * @...: A variable number of integers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (separator != NULL && index != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
