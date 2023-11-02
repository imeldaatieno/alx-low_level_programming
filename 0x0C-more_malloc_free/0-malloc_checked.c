#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - a function that allocates memory using malloc
 *
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b);
{
	int b;

	b = malloc_checked(sizeof(char) * 98);
	_putchar("%p\n", (void *)b);
	free(b);
	return (0);
}
