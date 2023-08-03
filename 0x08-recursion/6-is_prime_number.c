#include "main.h"

int actual_prime(int n, int m);

/**
 * is_prime_number - check si un int est nombre primair ou pas
 * @n: le nombre a evaluer
 * Return: 1 si c'est le cas, 0 si c'est faux
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}


/**
 * actual_prime - check si le nombre est primaire de facon recursive
 * @n: nombre a evaluer
 * @m: l'interateur
 * Return: 1 si n est primaire, 0 si ce n'est pas le cas
 */


int actual_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (actual_prime(n, m - 1));
}

