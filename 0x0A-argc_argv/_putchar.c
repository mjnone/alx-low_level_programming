#include <stdio.h>
#include "main.h"

/**
 * _putchar -  x input to stdout
 * @x:Ther print
 * Return: 1 if successful and -1 if failed
 */
int _putchar(char x)
{
return (write(1, &x, 1));
}

