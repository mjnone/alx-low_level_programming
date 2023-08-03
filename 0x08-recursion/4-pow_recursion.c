#include "main.h"


/**
 * _pow_recursion - retourne la valeu de x en puissance de y
 * @x: la valeur aà relever
 * @y: puissance
 * Return: le resultat de la puissance
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

