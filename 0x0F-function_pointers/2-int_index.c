#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer and returns index if true, else -1
 * @array: array
 * @size: size of the array
 * @cmp: points to the function used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int j;

	if (!array)
		return (-1);
	if (size <= 0)
		return (-1);
	if (!cmp)
		return (-1);

	for (j = 0; j <= size; j++)
	{
	if (cmp(array[j]) != 0)
		return (j);
	}
	return (-1);
}
