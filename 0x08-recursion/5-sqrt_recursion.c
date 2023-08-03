#include "main.h"

int actual_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - returns la racine carree du nombre en input
 * @n: le nombre a avoir sa racine carree
 * Return: la racine caree resultante
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursion pour trouver les racine carree
 * @n: l'input
 * @m: l'interateur
 * Return: le resultat
 */

int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}
