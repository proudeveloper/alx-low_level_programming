#include <stdio.h>

/**
 *  main - this is the entry point
 *
 *  Return: set to 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 12; i < 14; i++)
	{
		for (j = 12; j < 14; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i != 13)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
