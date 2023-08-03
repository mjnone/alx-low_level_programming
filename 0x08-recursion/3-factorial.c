#include "main.h"

/**
 * factorial - donne le factoriel du nombre en input
 * @n: la fonction inverse
 * Return: factoriel de n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

