#include "main.h"
#include <unistd.h>
/**
 * _putchar - a function that writes c to the library
 * @c: to print
 *
 * Return: 1 if succesful
 * if nit successuful return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

