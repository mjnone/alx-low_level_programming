#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - digits
 * @str: aray
 * Return: 0
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int compte;

	compte = 0;
	while (compte < strlen(str)) /*compte string*/

	{
		if (!isdigit(str[compte])) /*check if str there are digit*/
		{
			return (0);
		}

		compte++;
	}
	return (1);
}

/**
 * main - programme
 * @argc: compte des arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int compte;
	int str_to_int;
	int somme = 0;

	compte = 1;
	while (compte < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[compte]))

		{
			str_to_int = atoi(argv[compte]); /*ATOI --> convert string to int*/
			somme += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		compte++;
	}

	printf("%d\n", somme); /*print somme*/

	return (0);
}

