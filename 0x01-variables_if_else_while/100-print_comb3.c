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

	for (i = 48; i < 58; i++)i
	{
		for (j = 48; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i != 56);
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
