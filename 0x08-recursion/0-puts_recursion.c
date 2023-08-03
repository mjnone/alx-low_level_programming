#include "main.h"
/**
 * _puts_recursion - il s'agit d'une fonction comme  puts();
 * @s: entreée de donneés
 * Return: toujours 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

