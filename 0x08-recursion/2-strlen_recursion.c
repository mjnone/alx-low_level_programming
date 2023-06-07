#include "main.h"
/**
 * _strlen_recursion - discribes a srting
 * @s: to execute
 *
 * Return: how long the string is
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

