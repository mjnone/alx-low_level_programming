#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - square root of n
 * @n : square root
 * Return: square root result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursive function
 * @n :  square root
 * @m : power
 * Return: square root result
 */


int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}

