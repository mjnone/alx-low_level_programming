#include "main.h"

int actual_prime(int n, int m);

/**
 * is_prime_number - prime number or not
 * @n: number
 * Return: 1 if successful and  0 if it fails
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - shows if n is prime recursively
 * @n: main variable
 * @m: iterator variable
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (actual_prime(n, m - 1));
}

