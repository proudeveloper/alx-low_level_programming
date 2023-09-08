#include <stdio.h>

/**
 * main - this is the entry point for our code
 *
 * Return: this is set to 0
 */

int main(void)
{
	char r;

	for (r = 'a'; r <= 'z' ; r++)
		putchar(r);
	for (r = 'A' ; r <= 'Z' ; r++)
		putchar(r);
	putchar('\n');
	return (0);
}
