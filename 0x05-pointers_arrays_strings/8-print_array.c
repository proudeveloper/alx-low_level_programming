#include "main.h"
#include <stdio.h>
/**
 * print_array - this function prints n
 * @a: parameter
 * @n: parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int i
		;
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i + 1 < n)
			printf(", ");
	}
	printf("\n");
}
