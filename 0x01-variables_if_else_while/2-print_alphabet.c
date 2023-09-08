#include <stdio.h>

/**
 * main - entry point
 *
 * Return: set to 0
 */
int main(void)
{
	char r;

	for (r = 'a' ; r <= 'z'; r++)
		putchar(r);
	putchar('\n');
	return (0);
}
