#include "main.h"

/**
 * print_rev - this function prints a string in reverse.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}
	while (n > 0)
	{
		_putchar(s[--n]);
	}
	_putchar('\n');
}
