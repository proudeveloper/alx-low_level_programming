#include <stdio.h>

/**
 *  main - this place is where entry is taken
 *
 *  Return: this is set to 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
