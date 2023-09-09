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

	for (i = 21; i < 31; i++)
	{
		for (j = 21; j < 31; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i != 29)
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
