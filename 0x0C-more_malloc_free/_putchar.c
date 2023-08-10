#include "main.h"
#include <unistd.h>


/**
 * _putchar - ecris c pour la libririe 
 * @c: le characrere a imprimer
 * Return: succes 1
 * erreur -1
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}

