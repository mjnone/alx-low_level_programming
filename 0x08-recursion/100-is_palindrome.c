#include "main.h"

int check_pal(char *s, int m, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check si le string est un plindrome
 * @s: le string a inverser
 * Return: 1 si oui, 0 si non
 */


int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}


/**
 * _strlen_recursion - donne la longeur du string
 * @s: mesure le string
 * Return: la mesure
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
 * check_pal - check les char pour le palindrome
 * @s: le string a checker
 * @m: l'iterator
 * @len: length of the string
 * Return: 1 si c'est un palindrome, 0 si c'est pas le cas
 */


int check_pal(char *s, int m, int len)
{
	if (*(s + m) != *(s + len - 1))
		return (0);
	if (m >= len)
		return (1);
	return (check_pal(s, m + 1, len - 1));
}

