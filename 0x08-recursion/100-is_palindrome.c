#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - shows if  string is palindrome
 * @s: main string
 * Return: 1 on success, 0 on failure 
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - tells how string is long
 * @s: string to evaluate
 * Return: how string is long
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - recursive function
 * @s: string to evaluate
 * @n: iterator
 * @m: how strong is long
 * Return: 1 on success, 0 if opposite
 */

int check_pal(char *s, int n, int m)
{
	if (*(s + n) != *(s + m - 1))
		return (0);
	if (n >= m )
		return (1);
	return (check_pal(s, n + 1, m - 1));
}

