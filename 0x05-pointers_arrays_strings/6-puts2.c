#include "main.h"

/**
 * puts2 - this function prints other strings
 * @str: parameter
 * Return: 0
 */
void puts2(char *str)
{
	int n = 0;

	int i = 0;

	while (*(str + n) != '\0')
		n++;
	while (i < n)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
