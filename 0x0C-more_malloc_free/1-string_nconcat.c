#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    unsigned int s1_length = 0;
    while (s1[s1_length] != '\0')
        s1_length++;

    unsigned int s2_length = 0;
    while (s2[s2_length] != '\0')
        s2_length++;

    if (n >= s2_length)
        n = s2_length;

    char *str = malloc(s1_length + n + 1);
    if (str == NULL)
    {
        return (NULL);
    }

    unsigned int i, j;

    for (i = 0; s1[i] != '\0'; i++)
        str[i] = s1[i];

    for (j = 0; j < n; j++)
    {
        str[i] = s2[j];
        i++;
    }

    str[i] = '\0';
    return (str);
}

