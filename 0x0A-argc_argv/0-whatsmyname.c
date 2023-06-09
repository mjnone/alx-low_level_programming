#include <stdio.h>
#include "main.h"

/**
 * main - Program's name printing
 * @argc: aguments' num
 * @argv: arguments' aray
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

