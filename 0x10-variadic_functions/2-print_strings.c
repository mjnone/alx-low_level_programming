#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints a variable number of strings followed by a new line
 * @separator: The string to be printed between strings, or NULL if not needed
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings is NULL, "(nil)" is printed instead
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && index != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
