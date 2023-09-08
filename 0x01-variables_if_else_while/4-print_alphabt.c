#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: this return is set to 0
 */
int main(void)
{
	char r;

	for (r = 'a'; r <= 'z' ; r++)
		if (r != 'q' && r != 'e')
			putchar(r);
	putchar('\n');
	return (0);
}
