#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array)
		return;
	if (!action)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}

