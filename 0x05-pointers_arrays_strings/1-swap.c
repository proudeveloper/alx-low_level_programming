#include "main.h"

/**
 * swap_int - this function swaps
 *@a: this is the first parameter
 *@b: this is the second parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
