#include <stdio.h>
#include <stdlib.h>

/**
 * Allocates memory using malloc.
 * 
 * @param b The number of bytes to allocate.
 * @return A pointer to the allocated memory.
 * If malloc fails, the function causes process termination with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if (ptr == NULL)
        exit(98);
    return ptr;
}


