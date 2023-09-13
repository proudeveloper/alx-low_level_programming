#include "main.h"

/**
 * print_times_table - this function prints the n times table, starting with 0
 * @n: this is the parameter for the function
 * Return: set to 0
 */
void print_times_table(int n)
{
	int i;
	int k;

	if (n < 0 && n > 15)
		return;
	for (i = 0 ; i <= n ; i++)
	{
		for (k = 0 ; k <= n ; k++)
		{
			int mul = i * k;

			if (k > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul < 100 ? (' ') : (mul / 100 + '0'));
				_putchar(mul < 10 ? (' ') : (mul / 10 % 10 + '0'));
				_putchar(mul % 10 + '0');
			}
			else
			{
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}

}
