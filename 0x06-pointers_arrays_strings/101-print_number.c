#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned ink k;

	if (n < 0)
	{
		_putchar('-');
		k = -n;
	}
	else
	{
		k = n;
	}
	if (k / 10)
		print_number(k / 10);

	_putchar((k % 10) + '0');
}
