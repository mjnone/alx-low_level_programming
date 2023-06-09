#include <stdio.h>
#include "main.h"

/**
 * main - prints input argumant
 * @argc: argumant's num
 * @argv: argumant's aray
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}

