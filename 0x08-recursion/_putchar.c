#include "main.h"
#include <unistd.h>
/**
 * _putchar - écris le character c dans stdout
 * @c: le character à imprimer 
 * Return: si c'est vrai 1
 * Si c'est faut, on imprime -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

