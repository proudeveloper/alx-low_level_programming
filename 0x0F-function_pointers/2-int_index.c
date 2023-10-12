#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @size: size of the array
 * @array: the arrya for the function
 * @cmp: the function
 * Return: set to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return(-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
