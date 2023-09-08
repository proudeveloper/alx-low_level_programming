#include <stdio.h>

/**
 *  main - this is the entry point
 *
 *  Return: set to 0
 */
int main(void)
{
	char r;

	for (r = 'z' ; r >= 'a' ; r--)
		putchar(r);
	putchar('\n');
	return (0);
}
