#include "main.h"

/**
 * _strlen_recursion - donne la longueur du string
 * @s: le string aà mesurer
 * Return: afficher la longueur du string
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

