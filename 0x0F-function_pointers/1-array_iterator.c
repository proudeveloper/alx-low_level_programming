#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - this function executes a function given as a parameter
 * on each element of an array
 * @action: function to perform on each element of array
 * @size: size of the array
 * @array: the array
 * Return: set to 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
