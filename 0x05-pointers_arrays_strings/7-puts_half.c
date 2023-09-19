#include "main.h"

/**
 * puts_half -  this function prints half of a string
 * @str: parameter
 * Return: zero
 */
void puts_half(char *str)
{
	int n = 0, i;

	while (*(str + n) != '\0')
		n++;

	for (i = (n / 2) + (n & 1); i < n; i++)
		_putchar(str[i]);

	_putchar('\n');

}
