#include <stdio.h>
#include "main.h"

/**
 * main - num of arguments
 * @argc: argumant's num
 * @argv: argumant's aray
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}

