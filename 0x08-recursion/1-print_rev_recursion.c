#include "main.h"

/**
 * _print_rev_recursion - imprime le string en inverse
 * @s: le sting aà imprimer
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

